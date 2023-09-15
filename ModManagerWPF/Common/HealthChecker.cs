﻿using SAModManager.Configuration;
using SAModManager.Ini;
using SAModManager.Updater;
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace SAModManager.Common
{
	public class HealthInfo
	{
		[IniName("name")]
		public string Filename { get; set; }

		[IniName("hash")]
		[IniCollection(IniCollectionMode.NoSquareBrackets, StartIndex = 1)]
		public List<string> Hashes { get; set; }
	}

	public class FileStatus
	{
		public enum StatusValue
		{
			Good = 0,
			NotFound = 1,
			Modified = 2,
			NotInList = 3,
		}

		public string Filename { get; set; }

		public StatusValue Status { get; set; }

		public static StatusValue GetFileStatus(string directory, HealthInfo file)
		{
			string filename = Path.Combine(directory, file.Filename);

			if (File.Exists(filename))
			{
				string currenthash = ModManifestGenerator.GetFileHash(filename);
				foreach (string hash in file.Hashes)
				{
					if (hash == currenthash)
						return StatusValue.Good;
					else
						return StatusValue.Modified;
				}
			}
			else
				return StatusValue.NotFound;

			return StatusValue.NotInList;
		}

		public FileStatus(string name, StatusValue status)
		{
			Filename = name;
			Status = status;
		}
	}

	public class HealthChecker
	{
		public static Dictionary<int, HealthInfo> Files { get; set; } = new();

		public static List<FileStatus> Fails { get; set; } = new();

		public static void RecheckStatus(string newfile, FileStatus status, HealthInfo file)
		{
			file.Filename = newfile;
			status.Status = FileStatus.GetFileStatus(App.CurrentGame.gameDirectory, file);
		}

		public static void SADXRecheck(FileStatus status, HealthInfo file)
		{
			switch (Path.GetFileName(status.Filename))
			{
				case "chrmodels.dll":
					RecheckStatus("system/chrmodels_orig.dll", status, file);
					break;
				case "re-jp.mpg":
					RecheckStatus("system/re-jp.sfd", status, file);
					break;
				case "re-us.mpg":
					RecheckStatus("system/re-us.sfd", status, file);
					break;
				case "sa1.mpg":
					RecheckStatus("system/sa1.sfd", status, file);
					break;
				case "sa2.mpg":
					RecheckStatus("system/sa2.sfd", status, file);
					break;
				case "sa3.mpg":
					RecheckStatus("system/sa3.sfd", status, file);
					break;
				case "sa4.mpg":
					RecheckStatus("system/sa4.sfd", status, file);
					break;
				case "sa5.mpg":
					RecheckStatus("system/sa5.sfd", status, file);
					break;
				case "sa6.mpg":
					RecheckStatus("system/sa6.sfd", status, file);
					break;
				case "sa7.mpg":
					RecheckStatus("system/sa7.sfd", status, file);
					break;
				case "sa8.mpg":
					RecheckStatus("system/sa8.sfd", status, file);
					break;
			}
		}

		public static void SA2Recheck(FileStatus status, HealthInfo file)
		{
			switch (Path.GetFileName(status.Filename))
			{

			}
		}

		public static void PerformHealthCheck(SetGame game)
		{
			MessageWindow message = new MessageWindow("Health Check", "You are about to run the Game HEalth check. This will verify all game files except audio files." +
				"\n\nDo you wish to continue?", type: MessageWindow.WindowType.Message, button: MessageWindow.Buttons.YesNo);

			message.ShowDialog();

			if (message.isYes)
			{
				bool failed = false;

				switch (game)
				{
					default:
					case SetGame.SADX:
						using (MemoryStream stream = new MemoryStream())
						{
							Files = IniSerializer.Deserialize<Dictionary<int, HealthInfo>>(IniFile.Load(stream));
						}
						break;
					case SetGame.SA2:
						using (MemoryStream stream = new MemoryStream())
						{
							Files = IniSerializer.Deserialize<Dictionary<int, HealthInfo>>(IniFile.Load(stream));
						}
						break;
				}

				try
				{
					int i = 0;
					foreach (KeyValuePair<int, HealthInfo> file in Files)
					{
						FileStatus status = new FileStatus(Path.GetFileName(file.Value.Filename), FileStatus.GetFileStatus(App.CurrentGame.gameDirectory, file.Value));

						if (status.Status != FileStatus.StatusValue.Good)
						{
							switch (game)
							{
								case SetGame.SADX:
									HealthChecker.SADXRecheck(status, file.Value);
									break;
								case SetGame.SA2:
									HealthChecker.SA2Recheck(status, file.Value);
									break;
							}
						}

						if (status.Status != FileStatus.StatusValue.Good)
							Fails.Add(status);

						i++;
					}
				}
				catch (Exception ex)
				{
					failed = true;
				}

				if (failed)
				{
					StringBuilder sb = new StringBuilder();
					foreach (FileStatus file in Fails)
					{
						switch (file.Status)
						{
							case FileStatus.StatusValue.Modified:
								sb.AppendLine(file.Filename + " is modified.");
								break;
							case FileStatus.StatusValue.NotFound:
								sb.AppendLine(file.Filename + " was not found.");
								break;
						}
					}

					MessageWindow failedFiles = new MessageWindow("Unmatched Files", "The following files are not verified:" +
						sb.ToString(), type: MessageWindow.WindowType.IconMessage, icon: MessageWindow.Icons.Information, button: MessageWindow.Buttons.OK);

					failedFiles.ShowDialog();
				}
				else
				{
					MessageWindow success = new MessageWindow("Verified", "All checked files match.",
						type: MessageWindow.WindowType.IconMessage, icon: MessageWindow.Icons.Information, button: MessageWindow.Buttons.OK);

					success.ShowDialog();
				}
			}

		}
	}
}