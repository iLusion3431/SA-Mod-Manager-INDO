#pragma once

void MaterialColorFixes_Init();

// NJS_MODEL_SADX addresses in the EXE
static int EXEModelPointers[] =
{
	0x2AD4E78,
	0x2AD4CA8,
	0x2ABAA78,
	0x2AC9840,
	0x2AD7648,
	0x2AB89A8,
	0x2AD4820,
	0x2AD3BAC,
	0x2ABAF24,
	0x2ABF630,
	0x2AC5B18,
	0x2AC2D78,
	0x2AC0740,
	0x2AC51C8,
	0x2AC46E8,
	0x2AD7000,
	0x2AB7F48,
	0x2AB7550,
	0x2AB6E20,
	0x2AD6AC0,
	0x2AD7440,
	0x2AD289C,
	0x2AD246C,
	0x2B068D8,
	0x2AEA9CC,
	0x2AEA368,
	0x2B06228,
	0x2B069E4,
	0x2B06AF0,
	0x2B027AC,
	0x2B01BDC,
	0x2AF1CDC,
	0x2AF1BD0,
	0x10FEF48,
	0x10FB78C,
	0x10FA9A4,
	0x10F82C0,
	0x10F4A38,
	0x10F4728,
	0x10F463C,
	0x10F4550,
	0x10F4378,
	0x10F428C,
	0x10F41A0,
	0x110C1B0,
	0x10D7748,
	0x931A60,
	0x15715D0,
	0x1574A58,
	0x157D570,
	0x157D680,
	0x15C82B4,
	0x15E614C,
	0x15678A4,
	0x155A1B8,
	0x1561A44,
	0x155EA40,
	0x155DCA0,
	0x155CE58,
	0x155C0B8,
	0x155B570,
	0x155B114,
	0x155AA28,
	0x15658B4,
	0x15650AC,
	0x1564014,
	0x156235C,
	0x162275C,
	0x162DA94,
	0x162BDD4,
	0x162B724,
	0x162A604,
	0x1629F54,
	0x1628E34,
	0x1628784,
	0x1627664,
	0x1626FB4,
	0x162F528,
	0x162E0D0,
	0x165512C,
	0x165817C,
	0x16587D0,
	0x1658F8C,
	0x165B804,
	0x165D230,
	0x1654EFC,
	0x1654714,
	0x16538F4,
	0x1651C9C,
	0x1625B0C,
	0x1686CE0,
	0x169C3DC,
	0x16B2FC8,
	0x16701B8,
	0x166F9E8,
	0x166F6C8,
	0x1671870,
	0x16710A0,
	0x1670A10,
	0x16727E8,
	0x1673790,
	0x1674BD8,
	0x1674A80,
	0x1674928,
	0x1673D50,
	0x1673BF8,
	0x1673AA0,
	0x16744D8,
	0x16750E8,
	0x16B41DC,
	0x1669D7C,
	0x1667EB0,
	0x1667C08,
	0x1667988,
	0x1667270,
	0x1666758,
	0x1666050,
	0x1665A28,
	0x1662718,
	0x1662470,
	0x1661830,
	0x1661588,
	0x1660920,
	0x1660678,
	0x1660078,
	0x166C520,
	0x166BAD0,
	0x166B990,
	0x166B4B8,
	0x166AE20,
	0x1669F10,
	0x166EEA4,
	0x166DC68,
	0x16E2FF0,
	0x16E3328,
	0x16E3968,
	0x16E3CA0,
	0x16E8C00,
	0x1133260,
	0x1132A24,
	0x11326B8,
	0x1132474,
	0x1132048,
	0x1131E4C,
	0x1131954,
	0x11315E8,
	0x11313A4,
	0x1130F78,
	0x1130D7C,
	0x11308F0,
	0x112F17C,
	0x112ECA8,
	0x112E070,
	0x112C6B8,
	0x112C500,
	0x112B558,
	0x112AC94,
	0x112A6BC,
	0x112A1E8,
	0x11295B0,
	0x1127BF8,
	0x1127A40,
	0x1126A98,
	0x11261D4,
	0x1125C34,
	0x1122D40,
	0x1122678,
	0x1122490,
	0x1121EB8,
	0x11437F4,
	0x1143320,
	0x11426E8,
	0x1140D30,
	0x1140B78,
	0x11400B8,
	0x1139248,
	0x11339C0,
	0x113F7F0,
	0x1139F68,
	0x11398A0,
	0x1139720,
	0x114B8EC,
	0x11C9D9C,
	0x11D0F1C,
	0x11C9244,
	0x11D4D68,
	0x11D4C5C,
	0x11D4B50,
	0x11D4A44,
	0x11D4938,
	0x11D482C,
	0x11D4720,
	0x11D4614,
	0x11D4508,
	0x11D43FC,
	0x11D42F0,
	0x11D41E4,
	0x11D40D8,
	0x11D3FCC,
	0x11D3EC0,
	0x11D3DB4,
	0x11D3CA8,
	0x11D3B9C,
	0x11D3A90,
	0x11D3984,
	0x11D3878,
	0x11D376C,
	0x11D3660,
	0x11D3554,
	0x11D3448,
	0x11D333C,
	0x11D3230,
	0x11C2BF4,
	0x11C4E70,
	0x11C6CEC,
	0x119E178,
	0x119CFCC,
	0x119B1B0,
	0x119AC40,
	0x119A5A0,
	0x1199FB0,
	0x1198EEC,
	0x1198668,
	0x1197FD0,
	0x1197588,
	0x11973D0,
	0x1196F18,
	0x1195358,
	0x11951A0,
	0x1194B08,
	0x1194268,
	0x1193E80,
	0x1193AEC,
	0x1192838,
	0x1192680,
	0x1191FE8,
	0x1191738,
	0x1191380,
	0x1190FEC,
	0x11A6500,
	0x11A0300,
	0x11A0148,
	0x119FAB0,
	0x119F200,
	0x119EE18,
	0x119EA30,
	0x119E644,
	0x11EC830,
	0x11C1BF8,
	0x11BFFC8,
	0x11C0750,
	0x11C0ED8,
	0x121ED88,
	0x121EF10,
	0x121F550,
	0x121F6D8,
	0x121E7E0,
	0x124D850,
	0x124DB88,
	0x124E1C8,
	0x124E500,
	0x1383C8C,
	0x11EDF0C,
	0x1257728,
	0x1254580,
	0x1253FA0,
	0x12535C0,
	0x1251FAC,
	0x13870B8,
	0x1386D10,
	0x128A6B0,
	0x1288300,
	0x1287DB0,
	0x1287888,
	0x12872E0,
	0x1286D8C,
	0x1285F84,
	0x1284F0C,
	0x12848E4,
	0x12842E4,
	0x1283D44,
	0x12837A4,
	0x1283204,
	0x1282C64,
	0x12826C4,
	0x1281F84,
	0x128174C,
	0x128129C,
	0x1280F60,
	0x1294184,
	0x1293930,
	0x12934C8,
	0x1292DDC,
	0x1292B24,
	0x129286C,
	0x12925B4,
	0x12922FC,
	0x1292044,
	0x1291C88,
	0x12913A0,
	0x1290DF4,
	0x1290948,
	0x12903A8,
	0x12900B4,
	0x128FB7C,
	0x128F544,
	0x128EF0C,
	0x128E8D4,
	0x128E29C,
	0x128DC64,
	0x128D6C8,
	0x128C3CC,
	0x128C134,
	0x128BEEC,
	0x128BC54,
	0x128B54C,
	0x128B2B4,
	0x128B06C,
	0x128ADD4,
	0x128AB8C,
	0x128A8F4,
	0x13802A8,
	0x13806F8,
	0x1380B48,
	0x1380F50,
	0x13812A4,
	0x1381520,
	0x1381664,
	0x1262B28,
	0x1272F2C,
	0x1271B6C,
	0x1271874,
	0x12708B0,
	0x12706A0,
	0x1270480,
	0x1270260,
	0x1270044,
	0x126FDCC,
	0x126FB54,
	0x126F8DC,
	0x126F528,
	0x126F114,
	0x126EB08,
	0x126E5F0,
	0x126E1AC,
	0x126DBA0,
	0x126D67C,
	0x126D238,
	0x126C9E4,
	0x126C4BC,
	0x126C0F0,
	0x126BD5C,
	0x126B9B0,
	0x126B624,
	0x126B248,
	0x126AEB4,
	0x126AB30,
	0x126A79C,
	0x126A3EC,
	0x1269FA0,
	0x1269BC4,
	0x12697A0,
	0x12693F4,
	0x1267D50,
	0x1267740,
	0x12668D4,
	0x1265E10,
	0x1265830,
	0x1264C3C,
	0x12649C4,
	0x1263EB8,
	0x12638BC,
	0x1263364,
	0x1263004,
	0x1280A50,
	0x127A624,
	0x1279660,
	0x1279450,
	0x1279230,
	0x1279010,
	0x1278DF0,
	0x1278C38,
	0x1278AB8,
	0x1278900,
	0x1278780,
	0x12785C8,
	0x1278448,
	0x1278290,
	0x1278114,
	0x1275368,
	0x12751B0,
	0x1275034,
	0x1274D3C,
	0x1274734,
	0x1274128,
	0x12738D0,
	0x1273450,
	0x137ED00,
	0x14A01C0,
	0x1424E30,
	0x138DE30,
	0x138D788,
	0x13A27C4,
	0x1398C38,
	0x13A6E60,
	0x13A6190,
	0x13A51C0,
	0x13A4858,
	0x1491DB0,
	0x1492BF8,
	0x1493A40,
	0x148F91C,
	0x1490F6C,
	0x13A4008,
	0x1434A10,
	0x143544C,
	0x14386C8,
	0x143A4D0,
	0x143AC18,
	0x143B654,
	0x143E8D0,
	0x14406D8,
	0x1440E20,
	0x144185C,
	0x1444B10,
	0x1446918,
	0x142F060,
	0x1431980,
	0x14342C8,
	0x144E898,
	0x146CCC4,
	0x146CF70,
	0x146D718,
	0x15201C8,
	0x1520540,
	0x14DEC30,
	0x14DDE54,
	0x14DDAF8,
	0x14DD970,
	0x14DD6A4,
	0x14DD478,
	0x14DCBFC,
	0x14DC8B0,
	0x14DC728,
	0x14DC45C,
	0x14DC230,
	0x14DBA18,
	0x14D9410,
	0x14D8850,
	0x14D8550,
	0x14D8124,
	0x14D7688,
	0x14D6750,
	0x14D64D8,
	0x14D60C8,
	0x14DE570,
	0x1550630,
	0x1550968,
	0x1550FA8,
	0x15512E0,
	0x34BC6C0,
	0x34BD250,
	0x3602658,
	0x3602764,
	0x36028D8,
	0x36029E4,
	0x36023D8,
	0x36024E4,
	0x3604514,
	0x360692C,
	0x34764D0,
	0x3431848,
	0x3430BF0,
	0x342FD20,
	0x33AADB0,
	0x33AD250,
	0x33AD6F0,
	0x33ADB90,
	0x33AE030,
	0x33AEB10,
	0x33AEF5C,
	0x33AF8E8,
	0x34B47E0,
	0x34B5D88,
	0x95A308,
	0x95DAA8,
	0x95D0C8,
	0x95C1D8,
	0x95A9A8,
	0x961EF8,
	0x38D0568,
	0x38CFB20,
	0x38CF7EC,
	0x38CF200,
	0x38CEA00,
	0x38CE200,
	0x38CDA00,
	0x96B63C,
	0x38E3558,
	0x38E292C,
	0x38E265C,
	0x38E3B00,
	0x38E5098,
	0x38E4C5C,
	0x38E4B50,
	0x38E46A4,
	0x38E4598,
	0x9911A0,
	0x990F80,
	0x990B60,
	0x9903C0,
	0x98FC00,
	0x98F4F8,
	0x98ED50,
	0x98D0B0,
	0x98CDD0,
	0x98CB30,
	0x98C808,
	0x98C4F0,
	0x98C0E0,
	0x98BC40,
	0x98B960,
	0x98B6C0,
	0x98B398,
	0x98B080,
	0x98AC70,
	0x98A8C4,
	0x98A250,
	0x989F10,
	0x989BD0,
	0x989960,
	0x991DF8,
	0x991B18,
	0x991878,
	0x991550,
	0x9548A4,
	0x954468,
	0x953E84,
	0x953A48,
	0x955020,
	0x954E68,
	0x953858,
	0x952C3C,
	0x9523A4,
	0x951B0C,
	0x951274,
	0x950DFC,
	0x973860,
	0x971950,
	0x971844,
	0x38C9778,
	0x94DA18,
	0x94C750,
	0x94BEE8,
	0x94BAA0,
	0x94B0B4,
	0x94AB28,
	0x94EFA8,
	0x94FB0C,
	0x950664,
	0x950914,
	0x986F54,
	0x9889B8,
	0x987DF4,
	0x970D60,
	0x96FA48,
	0x96F3C4,
	0x31AB3A0,
	0x31AAE30,
	0x31AAAE8,
	0x31AA7A0,
	0x31AA528,
	0x31AA078,
	0x31A980C,
	0x31A8478,
	0x31A8278,
	0x31A8078,
	0x31A7EF0,
	0x31A7CCC,
	0x31A78F4,
	0x31A7778,
	0x31A7534,
	0x31A73B8,
	0x319F6E8,
	0x319C04C,
	0x319BDAC,
	0x319BB70,
	0x319AFAC,
	0x319A410,
	0x319A280,
	0x3199834,
	0x3199420,
	0x3199290,
	0x3198FE0,
	0x3198C28,
	0x31988D0,
	0x31986A0,
	0x3198510,
	0x3198278,
	0x3197EC8,
	0x3197B70,
	0x3197940,
	0x31977B0,
	0x3197584,
	0x3197354,
	0x31A7210,
	0x31A6FF0,
	0x31A6BD0,
	0x31A6450,
	0x31A5C90,
	0x31A5578,
	0x31A4DD0,
	0x31A3170,
	0x31A2E90,
	0x31A2BF0,
	0x31A28C8,
	0x31A25B0,
	0x31A21D0,
	0x31A1D30,
	0x31A1A50,
	0x31A17B0,
	0x31A1488,
	0x31A1170,
	0x31A0D90,
	0x31A09F4,
	0x31A0380,
	0x31A0040,
	0x319FD00,
	0x319FA90,
	0x3398808,
	0x30B06F0,
	0x2C66AE4,
	0x2C65CCC,
	0x2C61598,
	0x2C60ED0,
	0x2C60618,
	0x2C603A8,
	0x2C60078,
	0x2C5F858,
	0x2C5F5EC,
	0x2C5F100,
	0x2C5EE90,
	0x2C5EB60,
	0x2C5E340,
	0x2C5E0D4,
	0x2C5DCEC,
	0x2C5C76C,
	0x2C5C1C8,
	0x2C5BED4,
	0x2C5B858,
	0x2C5B5E8,
	0x2C5B06C,
	0x2C5AAC8,
	0x2C5A7D4,
	0x2C5A158,
	0x2C59EE8,
	0x2D69600,
	0x3185C64,
	0x31854A0,
	0x3183F38,
	0x3181930,
	0x31813C0,
	0x3180C2C,
	0x3180788,
	0x317FB10,
	0x317E140,
	0x317DF88,
	0x317D0A8,
	0x317C804,
	0x317C2F0,
	0x317C120,
	0x317BED8,
	0x317BA40,
	0x317B874,
	0x317B384,
	0x317B080,
	0x317AE4C,
	0x317AAB8,
	0x317A8E8,
	0x317A614,
	0x317A310,
	0x317A0DC,
	0x3179D20,
	0x3179B50,
	0x302FCA8,
	0x302EA3C,
	0x302CB20,
	0x302C5B0,
	0x302BF10,
	0x302B920,
	0x302A844,
	0x3029F88,
	0x30298F0,
	0x3028EA8,
	0x3028CF0,
	0x3028838,
	0x3026B50,
	0x3026998,
	0x3026300,
	0x3025A60,
	0x3025678,
	0x30252E4,
	0x3024010,
	0x3023E58,
	0x30237C0,
	0x3022EF0,
	0x3022B38,
	0x30227A4,
	0x2E2D54C,
	0x2E2D258,
	0x2E2CE64,
	0x2D3D614,
	0x2D3D320,
	0x2D3CF2C,
	0x2D3F544,
	0x2D3F250,
	0x2D3EE5C,
	0x2CF1FFC,
	0x2CF1D08,
	0x2CF1914,
	0x2CBDC2C,
	0x2CBD938,
	0x2CBD544,
	0x2CD75FC,
	0x2CD7308,
	0x2CD6F14,
	0x2D229F4,
	0x2D22700,
	0x2D2230C,
	0x2CBEF9C,
	0x2CBECA8,
	0x2CBE8B4,
	0x313412C,
	0x3133DD0,
	0x3133C48,
	0x313397C,
	0x3133750,
	0x3132ED4,
	0x3132B88,
	0x3132A00,
	0x3132734,
	0x3132508,
	0x3131CF0,
	0x312F6E8,
	0x312EB28,
	0x312E828,
	0x312E3FC,
	0x312D960,
	0x312CA28,
	0x312C7B0,
	0x312C3A0,
	0x3134848,
	0x306A4A8,
	0x306B478,
	0x306C448,
	0x306D418,
	0x3072530,
	0x30752E8,
	0x308E3A0,
	0x308B6C0,
	0x308B210,
	0x3086278,
	0x3085C08,
	0x3082748,
	0x307F6D0,
	0x307F098,
	0x307DE80,
	0x307D0D0,
	0x307C5E8,
	0x307C378,
	0x307BE74,
	0x307BD28,
	0x307AFF0,
	0x307AC60,
	0x307A8B0,
	0x307A520,
	0x307A174,
	0x30796B0,
	0x30793B0,
	0x3078820,
	0x30783F0,
	0x3095A28,
	0x30957C0,
	0x30955F8,
	0x3095270,
	0x3094908,
	0x3094390,
	0x3094100,
	0x3093E38,
	0x3092DFC,
	0x3092AA0,
	0x309291C,
	0x30926F0,
	0x3092230,
	0x3091E20,
	0x2DA8498,
	0x2DA76E0,
	0x2DA6BF8,
	0x2DA6988,
	0x2DA6484,
	0x2DA6338,
	0x2DA5600,
	0x2DA5270,
	0x2DA4EC0,
	0x2DA4B30,
	0x2DA4784,
	0x2DA3CC0,
	0x2DA39C0,
	0x2DA3038,
	0x2DA2A00,
	0x2DA1418,
	0x2DA0FE8,
	0x30AFEF4,
	0x30AFB98,
	0x30AFA10,
	0x30AF744,
	0x30AF518,
	0x30AEC9C,
	0x30AE950,
	0x30AE7C8,
	0x30AE4FC,
	0x30AE2D0,
	0x30ADAB8,
	0x30ACBC0,
	0x30AC648,
	0x30ABEA0,
	0x30ABC38,
	0x30ABA70,
	0x30AB6E8,
	0x30AB060,
	0x30AA4A0,
	0x30AA1A0,
	0x30A9D74,
	0x30A92D8,
	0x30A83A0,
	0x30A8128,
	0x30A7D18,
	0x30A7774,
	0x30A7418,
	0x30A7290,
	0x30A6FC4,
	0x30A6D98,
	0x30A651C,
	0x30A61D0,
	0x30A6048,
	0x30A5D7C,
	0x30A5B50,
	0x30A5338,
	0x30A4440,
	0x30A3EC8,
	0x30A3720,
	0x30A34B8,
	0x30A32F0,
	0x30A2F68,
	0x30A28E0,
	0x30A1D20,
	0x30A1A20,
	0x30A15F4,
	0x30A0B58,
	0x309FC20,
	0x309F9A8,
	0x309F598,
	0x309EFF4,
	0x309EC98,
	0x309EB10,
	0x309E844,
	0x309E618,
	0x309DD9C,
	0x309DA50,
	0x309D8C8,
	0x309D5FC,
	0x309D3D0,
	0x309CBB8,
	0x309BD50,
	0x309B7D8,
	0x309B030,
	0x309ADC8,
	0x309AC00,
	0x309A878,
	0x309A1F0,
	0x3099678,
	0x3099378,
	0x3098F4C,
	0x30984B0,
	0x3097578,
	0x3097300,
	0x3096EF0,
	0x2EEB4F8,
	0x2EE77DC,
	0x3306244,
	0x3303838,
	0x3302BD0,
	0x3302068,
	0x3301400,
	0x3300B68,
	0x3300714,
	0x33000F0,
	0x3314484,
	0x3312890,
	0x3311438,
	0x3310514,
	0x330FE64,
	0x330ED44,
	0x330E694,
	0x330D574,
	0x330CEC4,
	0x330BDA4,
	0x330B6F4,
	0x330A4A4,
	0x3309C9C,
	0x3308C04,
	0x3306F4C,
	0x331886C,
	0x328CE4C,
	0x328C438,
	0x328C158,
	0x328BE78,
	0x328BA28,
	0x328B5D8,
	0x328B188,
	0x328AD28,
	0x328AB94,
	0x328A9B4,
	0x328A7D4,
	0x328A5F4,
	0x328A410,
	0x328A27C,
	0x328A09C,
	0x3289EBC,
	0x3289CDC,
	0x339B5C0,
	0x339B9E8,
	0x339BDA0,
	0x339C360,
	0x2DBD6A4,
	0x2DBC728,
	0x2DBC1C8,
	0x2DBA9DC,
	0x2DBA5DC,
	0x2DBA414,
	0x2C9BB18,
	0x2C9B3E0,
	0x2C99EF4,
	0x2C99D10,
	0x2C993A4,
	0x2C991C0,
	0x2C98870,
	0x2C986DC,
	0x2C983A0,
	0x2C98148,
	0x2C97FB0,
	0x2C97E1C,
	0x2C97AE0,
	0x2C97888,
	0x2C975A0,
	0x2C96F00,
	0x2C95A1C,
	0x2C95838,
	0x2C94EEC,
	0x2C94CF8,
	0x2C94398,
	0x2C94204,
	0x2C93ED8,
	0x2C93C80,
	0x2C93AE8,
	0x2C93954,
	0x2C93628,
	0x2C933D8,
	0x2C93100,
	0x2C929E8,
	0x2C914E4,
	0x2C91300,
	0x2C909A4,
	0x2C907C0,
	0x2C8FE60,
	0x2C8FCCC,
	0x2C8F978,
	0x2C8F728,
	0x2C8F590,
	0x2C8F3FC,
	0x2C8F0A8,
	0x2C8EE68,
	0x2BE2880,
	0x2FF17DC,
	0x2FF14E8,
	0x2FF10F4,
	0x2FF276C,
	0x2FF2460,
	0x2FF206C,
	0x315C86C,
	0x315C578,
	0x315C184,
	0x32D3E48,
	0x32D1B98,
	0x32CC77C,
	0x2F3F348,
	0x2F3F040,
	0x2F3ED68,
	0x2F3EA60,
	0x2F3E788,
	0x2F3E4B0,
	0x2DBFF90,
	0x2DBDAD8,
	0x2DBD9CC,
	0x33782B8,
	0x310458C,
	0x3104104,
	0x3103F3C,
	0x3297E08,
	0x3296B00,
	0x3296030,
	0x32956CC,
	0x3294E84,
	0x3293B54,
	0x32A0D58,
	0x32A05A0,
	0x329F654,
	0x329F290,
	0x329EBAC,
	0x329E7E8,
	0x329E544,
	0x329C6A4,
	0x32B6A5C,
	0x32B6698,
	0x32B5FB4,
	0x32B5BF0,
	0x32B4EC8,
	0x32B4668,
	0x32B3E9C,
	0x32B377C,
	0x32B3394,
	0x32B2CF4,
	0x32B290C,
	0x32B26C0,
	0x32AEA1C,
	0x32AE74C,
	0x32AE500,
	0x32AE0EC,
	0x32ADE1C,
	0x32ADBD0,
	0x32AD758,
	0x32ACED0,
	0x32AC55C,
	0x32AC3A8,
	0x32AB940,
	0x32AB40C,
	0x32AABA0,
	0x32AA66C,
	0x32C49DC,
	0x32C4790,
	0x32C40AC,
	0x32C3E60,
	0x324C9F4,
	0x324C78C,
	0x32E6E30,
	0x32D6824,
	0x10E5B50,
	0x10E51BC,
	0x10E4D18,
	0x10E49F0,
	0x10E4660,
	0x10E4368,
	0x10E3F68,
	0x10E3C70,
	0x10E3948,
	0x10E35B8,
	0x10E31F0,
	0x10E2B04,
	0x10E2358,
	0x10E1EC0,
	0x10E1CD8,
	0x10E19D0,
	0x10E1758,
	0x10E1414,
	0x10E0FA0,
	0x10E0DB8,
	0x10E0AA0,
	0x10E0848,
	0x10E00F8,
	0x10DFE80,
	0x10DFCB8,
	0x10DF820,
	0x10DF4E4,
	0x10DEFA0,
	0x10DEC7C,
	0x10DD2D0,
	0x10DD0E0,
	0x10DCEF0,
	0x10DCD98,
	0x10DC86C,
	0x10DBB40,
	0x10DBA34,
	0x2BF5D7C,
	0x2BF5684,
	0x2BF541C,
	0x3175390,
	0x3171B70,
	0x31719E8,
	0x3171760,
	0x3170D08,
	0x3170B78,
	0x31708B8,
	0x316FE58,
	0x316FCC8,
	0x316FA1C,
	0x316F5E0,
	0x316F248,
	0x316EF58,
	0x316EDC8,
	0x316EB34,
	0x316E6F8,
	0x316E370,
	0x316E080,
	0x316DEF0,
	0x316DC24,
	0x316D230,
	0x316CB60,
	0x2F02660,
	0x2F020F0,
	0x2F01DA8,
	0x2F01A60,
	0x2F017E8,
	0x2F01338,
	0x2F00ACC,
	0x2EFF738,
	0x2EFF538,
	0x2EFF338,
	0x2EFF1B0,
	0x2EFEF8C,
	0x2EFEBB4,
	0x2EFEA38,
	0x2EFE7F4,
	0x2EFE678,
	0x2F080C0,
	0x2F07B50,
	0x2F07808,
	0x2F074C0,
	0x2F07248,
	0x2F06D98,
	0x2F0652C,
	0x2F05198,
	0x2F04F98,
	0x2F04D98,
	0x2F04C10,
	0x2F049EC,
	0x2F04614,
	0x2F04498,
	0x2F04254,
	0x2F040D8,
	0x3223BF8,
	0x3223688,
	0x3223340,
	0x3222FF8,
	0x3222D80,
	0x32228D0,
	0x3222064,
	0x3220CD0,
	0x3220AD0,
	0x32208D0,
	0x3220748,
	0x3220524,
	0x322014C,
	0x321FFD0,
	0x321FD8C,
	0x321FC14,
	0x31DA8D0,
	0x31DA360,
	0x31DA018,
	0x31D9CD0,
	0x31D9A58,
	0x31D95A8,
	0x31D8D3C,
	0x31D79A8,
	0x31D77A8,
	0x31D75A8,
	0x31D7420,
	0x31D71FC,
	0x31D6E24,
	0x31D6CA8,
	0x31D6A64,
	0x31D68EC,
	0x2E1CC70,
	0x2E1C700,
	0x2E1C3B8,
	0x2E1C06C,
	0x2E1ACD8,
	0x2E1AAD8,
	0x2E1A8D8,
	0x2E1A750,
	0x2E1A52C,
	0x2E1A184,
	0x2E1A008,
	0x2E19DC4,
	0x2E19C48,
	0x2E218F8,
	0x2E21388,
	0x2E21040,
	0x2E20CF4,
	0x2E1F960,
	0x2E1F760,
	0x2E1F560,
	0x2E1F3D8,
	0x2E1F1B4,
	0x2E1EE0C,
	0x2E1EC90,
	0x2E1EA4C,
	0x2E1E8D0,
	0x984E80,
	0x984410,
	0x984160,
	0x983EB4,
	0x982914,
	0x982778,
	0x98266C,
	0x9824F0,
	0x9823E4,
	0x38E12F0,
	0x38DE9E4,
	0x38DD990,
	0x269D1E8,
	0x269EDF8,
	0x269E920,
	0x269E288,
	0x269D378,
	0x8D8ABC,
	0x8D4F28,
	0x8D4CF0,
	0x8D4AB8,
	0x8D4784,
	0x8D36A0,
	0x8D34E0,
	0x8D32B0,
	0x8D2A28,
	0x8D2880,
	0x8D2640,
	0x8D2498,
	0x8D1EAC,
	0x8D1C0C,
	0x8D1A08,
	0x8CF350,
	0x8CF118,
	0x8CEEE0,
	0x8CDAE8,
	0x8CD688,
	0x8CD494,
	0x8CC0F8,
	0x8CBCA8,
	0x8CBAB4,
	0x8CB81C,
	0xA983E0,
	0xA99480,
	0xA9A568,
	0xA9B608,
	0xA9C6F0,
	0xA9D7D8,
	0xA9E8C0,
	0xA9F960,
	0xAA0A00,
	0xAA1AE8,
	0xAA2B88,
	0xAA4378,
	0xAA47F0,
	0xAA4C68,
	0xAA50E0,
	0xAA5558,
	0xAA59D0,
	0xAA5E48,
	0xAA62C0,
	0xAA6738,
	0xAA6BB0,
	0xAA7028,
	0xAA74A0,
	0xAA7918,
	0xAA7D90,
	0xAA8208,
	0xAA8680,
	0xAA8AF8,
	0xAA8F70,
	0xAA93E8,
	0xAA9860,
	0xAA9CD8,
	0xAAA150,
	0xAAA5C8,
	0xAAAA40,
	0xAAAEB8,
	0xAAB330,
	0xAAB7A8,
	0xAABC20,
	0xAAC098,
	0xAAC510,
	0xAAC988,
	0xAACE00,
	0xAAD278,
	0xAAD6F0,
	0xAADB68,
	0xAADFE0,
	0xAAE458,
	0xAAE8D0,
	0xAAED48,
	0xAAF1C0,
	0xAAF638,
	0xAAFAB0,
	0xAAFF28,
	0xAB03A0,
	0xAB0818,
	0xAB0C90,
	0xAB1108,
	0xAB1580,
	0xAB19F8,
	0xAB1E70,
	0xAB22E8,
	0xAB2760,
	0xAB2BD8,
	0xAB3050,
	0xAB34C8,
	0xAB3940,
	0xAB3DB8,
	0xAB4230,
	0xAB46A8,
	0xAB4B20,
	0xAB4F98,
	0xAB5410,
	0xAB5888,
	0xAB5D00,
	0xAB6178,
	0xAB65F0,
	0xAB6A68,
	0xAB6EE0,
	0xAB7358,
	0xAB77D0,
	0xAB7C48,
	0xAB80C0,
	0xAB8538,
	0xAB89B0,
	0xAB8E28,
	0xAB92A0,
	0xAB9718,
	0xAB9B90,
	0xABA008,
	0xABA480,
	0xABA8F8,
	0xABAD70,
	0xABB1E8,
	0xABB660,
	0xABBAD8,
	0xABBF50,
	0xABC3C8,
	0xABC840,
	0xABCCB8,
	0xABD130,
	0xABD5A8,
	0xABDA20,
	0xABDE98,
	0xABE310,
	0xABE788,
	0xABEC00,
	0xABF078,
	0xABF4F0,
	0xABF968,
	0xABFDE0,
	0xAC0258,
	0xAC06D0,
	0xAC0B48,
	0xAC0FC0,
	0xAC1438,
	0xAC18B0,
	0xAC1D28,
	0xAC21A0,
	0xAC2618,
	0xAC2A90,
	0xAC2F08,
	0xAC3380,
	0xAC37F8,
	0xAC3C70,
	0xAC40E8,
	0xAC4560,
	0xAC5B98,
	0xAC7218,
	0xAC8850,
	0xAC8CC8,
	0xAC9140,
	0xAC9E24,
	0xACAB04,
	0xACB7E4,
	0xACC4C4,
	0xACD660,
	0xACECC0,
	0xAD0320,
	0xAD1980,
	0xAD2FB8,
	0xAD45F0,
	0xAD5C28,
	0xAD7260,
	0xAD8898,
	0xAD9ED0,
	0xADB508,
	0xADCB40,
	0xADE178,
	0xADF7B0,
	0xA88EE8,
	0xA8A738,
	0xA8ABB0,
	0xA8C1E8,
	0xA8D820,
	0xA8DC98,
	0xA8E110,
	0xA8EDF4,
	0xA8FF90,
	0xA915F0,
	0xA92C28,
	0xA94260,
	0xA95898,
	0xA465F0,
	0xA47690,
	0xA48730,
	0xA49818,
	0xA4A900,
	0xA4B9E8,
	0xA4CA88,
	0xA4DB28,
	0xA4EBC8,
	0xA503B8,
	0xA50830,
	0xA50CA8,
	0xA51120,
	0xA51598,
	0xA51A10,
	0xA51E88,
	0xA52300,
	0xA52778,
	0xA52BF0,
	0xA53068,
	0xA534E0,
	0xA53958,
	0xA53DD0,
	0xA54248,
	0xA546C0,
	0xA54B38,
	0xA54FB0,
	0xA55428,
	0xA558A0,
	0xA55D18,
	0xA56190,
	0xA56608,
	0xA56A80,
	0xA56EF8,
	0xA57370,
	0xA577E8,
	0xA57C60,
	0xA580D8,
	0xA58550,
	0xA589C8,
	0xA58E40,
	0xA592B8,
	0xA59730,
	0xA59BA8,
	0xA5A020,
	0xA5A498,
	0xA5A910,
	0xA5AD88,
	0xA5B200,
	0xA5B678,
	0xA5BAF0,
	0xA5BF68,
	0xA5C3E0,
	0xA5C858,
	0xA5CCD0,
	0xA5D148,
	0xA5D5C0,
	0xA5DA38,
	0xA5DEB0,
	0xA5E328,
	0xA5E7A0,
	0xA5EC18,
	0xA5F090,
	0xA5F508,
	0xA5F980,
	0xA5FDF8,
	0xA60270,
	0xA606E8,
	0xA60B60,
	0xA60FD8,
	0xA61450,
	0xA618C8,
	0xA61D40,
	0xA621B8,
	0xA62630,
	0xA62AA8,
	0xA62F20,
	0xA63398,
	0xA63810,
	0xA63C88,
	0xA64100,
	0xA64578,
	0xA649F0,
	0xA64E68,
	0xA652E0,
	0xA65758,
	0xA65BD0,
	0xA66048,
	0xA664C0,
	0xA66938,
	0xA66DB0,
	0xA67228,
	0xA676A0,
	0xA67B18,
	0xA67F90,
	0xA68408,
	0xA68880,
	0xA68CF8,
	0xA69170,
	0xA695E8,
	0xA69A60,
	0xA69ED8,
	0xA6A350,
	0xA6A7C8,
	0xA6AC40,
	0xA6B0B8,
	0xA6B530,
	0xA6B9A8,
	0xA6BE20,
	0xA6C298,
	0xA6C710,
	0xA6CB88,
	0xA6E1C0,
	0xA6F840,
	0xA70E78,
	0xA712F0,
	0xA71768,
	0xA7244C,
	0xA7312C,
	0xA742C8,
	0xA75460,
	0xA765F8,
	0xA77790,
	0xA78928,
	0xA79F88,
	0xA7B5C0,
	0xA7CBF8,
	0xA7E230,
	0xA7F868,
	0xA80EA0,
	0xA824D8,
	0xA83B10,
	0xA85148,
	0xA86780,
	0xA87DB8,
	0xA0E060,
	0xA0F100,
	0xA101E8,
	0xA112D0,
	0xA123B8,
	0xA13458,
	0xA144F8,
	0xA15598,
	0xA16638,
	0xA176D8,
	0xA18778,
	0xA19860,
	0xA1A900,
	0xA1C0F0,
	0xA1C568,
	0xA1C9E0,
	0xA1CE58,
	0xA1D2D0,
	0xA1D748,
	0xA1DBC0,
	0xA1E038,
	0xA1E4B0,
	0xA1E928,
	0xA1EDA0,
	0xA1F218,
	0xA1F690,
	0xA1FB08,
	0xA1FF80,
	0xA203F8,
	0xA20870,
	0xA20CE8,
	0xA21160,
	0xA215D8,
	0xA21A50,
	0xA21EC8,
	0xA22340,
	0xA227B8,
	0xA22C30,
	0xA230A8,
	0xA23520,
	0xA23998,
	0xA23E10,
	0xA24288,
	0xA24700,
	0xA24B78,
	0xA24FF0,
	0xA25468,
	0xA258E0,
	0xA25D58,
	0xA261D0,
	0xA26648,
	0xA26AC0,
	0xA26F38,
	0xA273B0,
	0xA27828,
	0xA27CA0,
	0xA28118,
	0xA28590,
	0xA28A08,
	0xA28E80,
	0xA292F8,
	0xA29770,
	0xA29BE8,
	0xA2A060,
	0xA2A4D8,
	0xA2A950,
	0xA2ADC8,
	0xA2B240,
	0xA2B6B8,
	0xA2BB30,
	0xA2BFA8,
	0xA2C420,
	0xA2C898,
	0xA2CD10,
	0xA2D188,
	0xA2D600,
	0xA2DA78,
	0xA2DEF0,
	0xA2E368,
	0xA2E7E0,
	0xA2EC58,
	0xA2F0D0,
	0xA2F548,
	0xA2F9C0,
	0xA2FE38,
	0xA302B0,
	0xA30728,
	0xA30BA0,
	0xA31018,
	0xA31490,
	0xA31908,
	0xA31D80,
	0xA321F8,
	0xA32670,
	0xA32AE8,
	0xA32F60,
	0xA333D8,
	0xA33850,
	0xA34E88,
	0xA364C0,
	0xA36938,
	0xA36DB0,
	0xA37A94,
	0xA38C30,
	0xA3A290,
	0xA3B8F0,
	0xA3CF28,
	0xA3E560,
	0xA3FB98,
	0xA411D0,
	0xA42808,
	0xA43E40,
	0xA45478,
	0x9CEE28,
	0x9CFF10,
	0x9D0FF8,
	0x9D20E0,
	0x9D3180,
	0x9D4220,
	0x9D52C0,
	0x9D6360,
	0x9D7400,
	0x9D84A0,
	0x9D9540,
	0x9DA5E0,
	0x9DB680,
	0x9DC768,
	0x9DD808,
	0x9DEFF8,
	0x9DF470,
	0x9DF8E8,
	0x9DFD60,
	0x9E01D8,
	0x9E0650,
	0x9E0AC8,
	0x9E0F40,
	0x9E13B8,
	0x9E1830,
	0x9E1CA8,
	0x9E2120,
	0x9E2598,
	0x9E2A10,
	0x9E2E88,
	0x9E3300,
	0x9E3778,
	0x9E3BF0,
	0x9E4068,
	0x9E44E0,
	0x9E4958,
	0x9E4DD0,
	0x9E5248,
	0x9E56C0,
	0x9E5B38,
	0x9E5FB0,
	0x9E6428,
	0x9E68A0,
	0x9E6D18,
	0x9E7190,
	0x9E7608,
	0x9E7A80,
	0x9E7EF8,
	0x9E8370,
	0x9E87E8,
	0x9E8C60,
	0x9E90D8,
	0x9E9550,
	0x9E99C8,
	0x9E9E40,
	0x9EA2B8,
	0x9EA730,
	0x9EABA8,
	0x9EB020,
	0x9EB498,
	0x9EB910,
	0x9EBD88,
	0x9EC200,
	0x9EC678,
	0x9ECAF0,
	0x9ECF68,
	0x9ED3E0,
	0x9ED858,
	0x9EDCD0,
	0x9EE148,
	0x9EE5C0,
	0x9EEA38,
	0x9EEEB0,
	0x9EF328,
	0x9EF7A0,
	0x9EFC18,
	0x9F0090,
	0x9F0508,
	0x9F0980,
	0x9F0DF8,
	0x9F1270,
	0x9F16E8,
	0x9F1B60,
	0x9F1FD8,
	0x9F2450,
	0x9F28C8,
	0x9F2D40,
	0x9F31B8,
	0x9F3630,
	0x9F3AA8,
	0x9F3F20,
	0x9F4398,
	0x9F4810,
	0x9F4C88,
	0x9F5100,
	0x9F5578,
	0x9F59F0,
	0x9F5E68,
	0x9F62E0,
	0x9F6758,
	0x9F6BD0,
	0x9F7048,
	0x9F74C0,
	0x9F7938,
	0x9F7DB0,
	0x9F8228,
	0x9F86A0,
	0x9F8B18,
	0x9FA150,
	0x9FB788,
	0x9FBC00,
	0x9FC078,
	0x9FCD5C,
	0x9FDA3C,
	0x9FE71C,
	0x9FF3FC,
	0xA000DC,
	0xA00DBC,
	0xA01A9C,
	0xA0277C,
	0xA0345C,
	0xA0413C,
	0xA04E1C,
	0xA05FB8,
	0xA07618,
	0xA08C50,
	0xA0A288,
	0xA0B8C0,
	0xA0CEF8,
	0x9CA598,
	0x9CB210,
	0x9CB088,
	0x9CAF00,
	0x9CAD78,
	0x9CABF0,
	0x9CAA68,
	0x9CD2CC,
	0x9CBFB0,
	0x16F5C40,
	0x16F4D84,
	0x16F4ABC,
	0x16F4960,
	0x16F48B0,
	0x16F4298,
	0x16EC5F0,
	0x16FA7B4,
	0x16FA48C,
	0x16F9660,
	0x16F8430,
	0x16F8158,
	0x16FD91C,
	0x90D788,
	0x90D518,
	0x9127D0,
	0x9128C8,
	0x912D80,
	0x90E350,
	0x90E0FC,
	0x90D108,
	0x8BD8DC,
	0x8B5098,
	0x8B4E24,
	0x8B4A24,
	0x8BCF68,
	0x8BC848,
	0x8BC3C8,
	0x8CB410,
	0x8CB040,
	0x8CACF4,
	0x8CABE8,
	0x8BF260,
	0x8BEAA8,
	0x8BE620,
	0x8BE270,
	0x8C5148,
	0x8B966C,
	0x8C5D5C,
	0x9749D0,
	0x8C3768,
	0x8C243C,
	0x8C9C20,
	0x8BBD84,
	0x8C5340,
	0x8B4080,
	0x8B24A4,
	0x8B267C,
	0x17289F4,
	0x17286CC,
	0x17278A0,
	0x1726670,
	0x1726398,
	0x1784540,
	0x1785F38,
	0x1741A70,
	0x1749580,
	0x174AF68,
	0x174C11C,
	0x174E948,
	0x38A90D0,
	0x38A896C,
	0x38A8404,
	0x38A81B8,
	0x38A802C,
	0x38A7DE0,
	0x38ADB68,
	0x38ADEE8,
	0x38AB1F0,
	0x38AAA8C,
	0x38AA524,
	0x38AA2D8,
	0x38AA14C,
	0x38A9F00,
	0x38B1170,
	0x38B0498,
	0x38AF230,
	0x38AEE6C,
	0x38B403C,
	0x38B4E90,
	0x38B5210,
	0x38B5818,
	0x38B5B98,
	0x38B61A0,
	0x38B64C8,
	0x38B7040,
	0x38B907C,
	0x38B95E0,
	0x38B97FC,
	0x38B9950,
	0x38B9B6C,
	0x38B9C9C,
	0x38B8754,
	0x38B84E8,
	0x38B788C,
	0x38B7554,
	0x38BE5C8,
	0x38BEEA0,
	0x38BFA48,
	0x38C0298,
	0x38BFC48,
	0x38C07A0,
	0x38C2120,
	0x38C287C,
	0x38C2320,
	0x38C2CC8,
	0x38C48F8,
	0x38C3C70,
	0x38C4924,
	0x38C4950,
	0x38C53FC,
	0x38BD328,
	0x38BDA48,
	0x38BE288,
	0x38BDB54,
	0x28E2C28,
	0x28E1344,
	0x28E118C,
	0x2936AA0,
	0x291C474,
	0x291C20C,
	0x28E0DB8,
	0x28E0EC4,
	0x28E0FD0,
	0x28DFD08,
	0x28C1E5C,
	0x28C13C8,
	0x28C3200,
	0x28C2274,
	0x28C5810,
	0x28C4A54,
	0x28CF35C,
	0x28CE7A4,
	0x289D59C,
	0x289D334,
	0x2818678,
	0x2818784,
	0x2818890,
	0x28175C8,
	0x27D7FD4,
	0x27D78DC,
	0x27D7674,
	0x2809260,
	0x27F8C54,
	0x285CEC0,
	0x285BBB4,
	0x285A1BC,
	0x28581AC,
	0x298E770,
	0x298DA74,
	0x298D8BC,
	0x298D698,
	0x298D58C,
	0x298D480,
	0x298D374,
	0x298D234,
	0x298D128,
	0x298D01C,
	0x298CF10,
	0x298CDD0,
	0x298CCC4,
	0x298CBB8,
	0x298CAAC,
	0x298C96C,
	0x298C860,
	0x298C754,
	0x298C648,
	0x298C53C,
	0x2986EAC,
	0x2986484,
	0x298C300,
	0x298C1F4,
	0x298BFEC,
	0x29846F4,
	0x298448C,
	0x2984224,
	0x2983FBC,
	0x2983D54,
	0x2983AEC,
	0x2983884,
	0x298361C,
	0x29833B4,
	0x29456B4,
	0x2944550,
	0x29423C4,
	0x294215C,
	0x2947104,
	0x2945B84,
	0x294591C,
	0x29396C4,
	0x2938E8C,
	0x2998C40,
	0x2998B34,
	0x2998A28,
	0x299891C,
	0x29987DC,
	0x29986D0,
	0x29985C4,
	0x29984B8,
	0x2998378,
	0x299826C,
	0x2998160,
	0x2998054,
	0x2997F14,
	0x2997E08,
	0x2997CFC,
	0x2997BF0,
	0x293D930,
	0x293A8C4,
	0x293A65C,
	0x293A3F4,
	0x2940504,
	0x293E67C,
	0x293E414,
	0x293E1AC,
	0x29972EC,
	0x2997088,
	0x2939E48,
	0x27C8A70,
	0x27C9EC0,
	0x27CA110,
	0x27CC14C,
	0x27CD624,
	0x27CEAFC,
	0x27D6258,
	0xF82548,
	0xF82B60,
	0xF836A8,
	0xF83DD4,
	0xF84884,
	0xF856CC,
	0xF86118,
	0xF86D1C,
	0xF87860,
	0xF881D0,
	0xF888D0,
	0xF8935C,
	0xF8D8C0,
	0xF8DFF0,
	0xF8E228,
	0xF8F86C,
	0xF8FFB4,
	0xF90A3C,
	0xF90D0C,
	0xF910E8,
	0xF91498,
	0xF92660,
	0xF928A8,
	0xF934C8,
	0xF938D8,
	0xF93A48,
	0xF93BC0,
	0xF93D38,
	0xF942E8,
	0xF94B50,
	0xF95608,
	0x101BBB0,
	0x101BE00,
	0x101C084,
	0x101C7D8,
	0x101D000,
	0x101D598,
	0x101E130,
	0x101E828,
	0x101F320,
	0x101F924,
	0x10207F8,
	0x1021210,
	0x1021DF0,
	0x1022CF0,
	0x1023648,
	0x1023CD4,
	0x1024780,
	0x1024AF8,
	0x1025230,
	0x10254C8,
	0x1025C2C,
	0x1026290,
	0x1027338,
	0x102A32C,
	0xF75E54,
	0xF76840,
	0xF770F0,
	0xF78030,
	0xF7842C,
	0xF789C4,
	0xF79300,
	0xF79B34,
	0xF7A4C0,
	0xF7ACBC,
	0xF7B5C0,
	0xF7B960,
	0xF7BD7C,
	0xF7BF34,
	0xF7C44C,
	0xF7C8A8,
	0xF7CDB8,
	0xF7D040,
	0xF7D2B8,
	0xF7D7C8,
	0xF7DAF8,
	0xF7DD70,
	0xF7E0A0,
	0xF7E408,
	0xF7E6F8,
	0xF7E9E8,
	0xF7EC60,
	0xF7EF18,
	0xE9DE6C,
	0xE9E974,
	0xE9F770,
	0xEE063C,
	0xEE16F0,
	0xEE1C4C,
	0xEE2838,
	0xEE3E84,
	0xEE4A4C,
	0xEE6A2C,
	0xEE7B00,
	0xEE86F8,
	0xEE9698,
	0xEEABA0,
	0xEEB514,
	0xEEBC34,
	0xEEBFA8,
	0xEEC608,
	0xEF1F6C,
	0xEF21E8,
	0xEF24A0,
	0xEF2718,
	0xEF2A08,
	0xEF2D18,
	0xEF3090,
	0x102E538,
	0xEE5C94,
	0x103B350,
	0x10AD1D8,
	0x10AC1D8,
	0x10AC2E4,
	0x10AC3F0,
	0x10A3F1C,
	0x10A3AD8,
	0x10A39C4,
	0x10A38B0,
	0x10A379C,
	0x10A4704,
	0x10A436C,
	0x10A4258,
	0x10A4144,
	0x10A4030,
	0x10A57D4,
	0x10C7800,
	0xC09C20,
	0xC07470,
	0xC06424,
	0xC06530,
	0xC3FC94,
	0xC3F9A8,
	0xC3F594,
	0xC3EF44,
	0xC3EC58,
	0xC3E844,
	0xC3E1F4,
	0xC3DF08,
	0xC3DAF4,
	0xC15E00,
	0xC49690,
	0xC49C38,
	0xC48F90,
	0xC48874,
	0xC48518,
	0xC48390,
	0xC480C4,
	0xC47E98,
	0xC4761C,
	0xC472D0,
	0xC47148,
	0xC46E7C,
	0xC46C50,
	0xC46438,
	0xC43EC0,
	0xC43348,
	0xC43048,
	0xC42C1C,
	0xC42180,
	0xC41248,
	0xC40FD0,
	0xC40BC0,
	0xC40754,
	0x26CCCFC,
	0x2728EC4,
	0x272A9E0,
	0x273B588,
	0x273E5E8,
	0x2741648,
	0x27446C8,
	0x2747740,
	0x2749148,
	0x274AB28,
	0x274C508,
	0x274DEF8,
	0x274F6A0,
	0x2750548,
	0x27596A0,
	0x2764678,
	0x27958AC,
	0x279A8F4,
	0x279AC54,
	0x279AFE8,
	0x27A0428,
	0x27A00E4,
	0x279FD68,
	0x279F864,
	0x279F4E4,
	0x279F164,
	0x279EDE4,
	0x279EA68,
	0x279E564,
	0x279E1E4,
	0x279DE64,
	0x27A0534,
	0x27A332C,
	0x27AE4C8,
	0x27AFCC4,
	0x27B06DC,
	0x27B1348,
	0x27B0BB8,
	0x27B0A18,
	0x27B0878,
	0x27B1F88,
	0x27B1828,
	0x27B1688,
	0x27B14E8,
	0x264DE6C,
	0x262E5FC,
	0x2652FE4,
	0x2658D24,
	0x267EF40,
	0x269785C,
	0x2697B30,
	0x26719F4,
	0x267107C,
	0x268F180,
	0x2690EF8,
	0x2693190,
	0x2694E68,
	0x2694390,
	0x2694284,
	0x267A1A0,
	0x2679FB0,
	0x267A2B0,
	0x267A3E4,
	0x267A540,
	0x267A650,
	0x267A784,
	0x267A894,
	0x267AA50,
	0x267AB84,
	0x267AC94,
	0x267ADA4,
	0x267AEE8,
	0x267B040,
	0x268C02C,
	0x268C7B0,
	0x268C23C,
	0x268CEF4,
	0x268CAF4,
	0x268C92C,
	0x2691994,
	0x2697C48,
	0x26969CC,
	0x26849A8,
	0x2684E08,
	0x2689498,
	0x2688C38,
	0x269FFDC,
	0x267FD70,
	0x2680728,
	0x2681258,
	0x2681D88,
	0x267462C,
	0x2683AA8,
	0x2683C88,
	0x2683E68,
	0x2688220,
	0x26751C0,
	0x2676A20,
	0x267748C,
	0x2677A20,
	0x26785D0,
	0x2679410,
	0x2679A68,
	0x2674B88,
	0x2664010,
	0x2682CC8,
	0x2682FF8,
	0x2683408,
	0x26838C8,
	0x2664328,
	0x2664760,
	0x23E4C28,
	0x249607C,
	0x24901E4,
	0x248B188,
	0x2487564,
	0x24872FC,
	0x2487094,
	0x2486E2C,
	0x2486BC4,
	0x248695C,
	0x24866F4,
	0x248648C,
	0x2486224,
	0x247E4A8,
	0x247DE3C,
	0x247DD30,
	0x247DC34,
	0x247DB48,
	0x247DA3C,
	0x247D940,
	0x2435240,
	0x244FD60,
	0x24459D0,
	0x2442BC0,
	0x24429F8,
	0x2441770,
	0x2441208,
	0x2440CB0,
	0x24547DC,
	0x2453FD0,
	0x246C974,
	0x246CA7C,
	0x2482110,
	0x2481A78,
	0x24816E4,
	0x2482D68,
	0x2482480,
	0x248221C,
	0x2461CC8,
	0x24619B8,
	0x2461698,
	0x2461388,
	0x2461068,
	0x2460D58,
	0x2460A48,
	0x2460738,
	0x2460418,
	0x2460108,
	0x243A1F4,
	0x24597E8,
	0x248405C,
	0x2485F28,
	0x2484D30,
	0x24A2630,
	0x24A2B68,
	0x24A1F30,
	0x24A1814,
	0x24A14B8,
	0x24A1330,
	0x24A1064,
	0x24A0E38,
	0x24A05BC,
	0x24A0270,
	0x24A00E8,
	0x249FE1C,
	0x249FBF0,
	0x249F3D8,
	0x249C890,
	0x249BCD0,
	0x249B9D0,
	0x249B5A4,
	0x249AB08,
	0x2499BD0,
	0x2499958,
	0x2499548,
	0x24990B4,
	0x214AC00,
	0x20DF6B0,
	0x20A9238,
	0x20A9008,
	0x21F72E0,
	0x21F9A40,
	0x21F97C0,
	0x2195AB0,
	0x21D5AD0,
	0x21A1F10,
	0x21ED434,
	0x21ED6B8,
	0x21ED7C4,
	0x21EDE3C,
	0x21EE138,
	0x219B340,
	0x21A4048,
	0x218A640,
	0x2179BE0,
	0x217AB00,
	0x217C6F8,
	0x21B1778,
	0x21B4D60,
	0x21B6DC8,
	0x21B8A50,
	0x21B5818,
	0x21B395C,
	0x21AA950,
	0x21A75D8,
	0x214E48C,
	0x21D7258,
	0x21D75D0,
	0x21D7948,
	0x21D7CC0,
	0x21D8038,
	0x21D8368,
	0x21D8698,
	0x21D89C8,
	0x21D8CF8,
	0x21D9070,
	0x21D93E8,
	0x21D9760,
	0x2195FB0,
	0x2198008,
	0x2197770,
	0x21B0228,
	0x21AE974,
	0x21FB7EC,
	0x21DF278,
	0x21DF528,
	0x21DFE88,
	0x21E040C,
	0x21E0690,
	0x1FE9F0C,
	0x1FEB63C,
	0x1FEC240,
	0x1F67B80,
	0x1F68FDC,
	0x1F69BE8,
	0x1F6BE00,
	0x1F47D44,
	0x1F4AB84,
	0x1F4C270,
	0x1F4C93C,
	0x1E9B568,
	0x1FE9D50,
	0x202F340,
	0x20317E4,
	0x201C770,
	0x2028C98,
	0x20275AC,
	0x202E3D8,
	0x201D374,
	0x201D944,
	0x201DF14,
	0xDCA2D4,
	0xD6B370,
	0xDD34D8,
	0xDD5430,
	0xDD57F0,
	0xDD7048,
	0xDD7548,
	0xDD832C,
	0xDD87B8,
	0xDD8E40,
	0xDD9510,
	0xDD9DF0,
	0xE728D0,
	0xE537AC,
	0xE49204,
	0xE49310,
	0x1D50B58,
	0x1D6C5C8,
	0x1D6C8EC,
	0x1D798A8,
	0x1D79A40,
	0x1D79E20,
	0x1D7C564,
	0x1D7C918,
	0x1D7CA38,
	0x1D5B720,
	0x1D192C8,
	0x1D195B8,
	0x1CA3F28,
	0x1CA9D84,
	0x1CA9E90,
	0x1CACFD4,
	0x1CAD0E0,
	0x1CB9BAC,
	0x1CBCC60,
	0x1CBCD6C,
	0x1C470B8,
	0x1C4C9B0,
	0x1C4CB48,
	0x1C5CA8C,
	0x1C62F70,
	0x1C67224,
	0x1C71AD0,
	0x1C74010,
	0x1C85E88,
	0x1C713D8,
	0x1E01E54,
	0x1DFCF1C,
	0x1E30B20,
	0x1E5EC20,
	0x1E472D0,
	0x1E3EDE0,
	0x1E3E408,
	0x1E3E0C8,
	0x1E3DD88,
	0x1E3DA48,
	0x1E3D708,
	0x1E5B844,
	0x1E574F0,
	0x1E56BF0,
	0x1E56574,
	0x1E54AC0,
	0x1E53AF8,
	0x1E533E0,
	0x1E518C4,
	0x1E446B8,
	0x1E443A8,
	0x1E4C870,
	0x1E45760,
	0x1E451DC,
	0x1E47AF0,
	0x1E47C78,
	0x1E74A68,
	0x1E70960,
	0x1E6C560,
	0x1E6C1C0,
	0x1E4C0E8,
	0x1E3C740,
	0x1E3CBE0,
	0x1E3C2A0,
	0x1E47100,
	0x1E40318,
	0x1E3FCD8,
	0x1E45AD8,
	0x1E45E50,
	0x1E40730,
	0x1E40D68,
	0x1E413A0,
	0x1E419D8,
	0x1E46260,
	0x1E46058,
	0x1E438A8,
	0x1E3B510,
	0x1E5E790,
	0x1E5E1B4,
	0x1E3CDC0,
	0x1E3CFA0,
	0x1E3D278,
	0x1E4D640,
	0x1E4D0D0,
	0x1E4CDEC,
	0x1E3D550,
	0x1E4E3C4,
	0x1E4DDF8,
	0x1E4DA90,
	0x1E0D048,
	0x1E0A294,
	0x1DF96B8,
	0x1E0E030,
	0x1E0F538,
	0x1E11418,
	0x1E12C18,
	0x1DF7AC0,
	0x1DF77C0,
	0x1DF8218,
	0x1DF7EA8,
	0x1E12ED8,
	0x1E4B734,
	0x1E5E370,
	0x1E5E47C,
	0x1DD0A14,
	0x1DCC5C8,
	0x1DCBB38,
	0x1DCB5F0,
	0x1DCD5A0,
	0x1DCE030,
	0x1DCB0A8,
	0x1DCCB10,
	0x1DCC080,
	0x1DCDAE8,
	0x1DCD058,
	0x1DCE370,
	0x1DCE6B0,
	0x1DCE9F0,
	0x1DCED30,
	0x1DCF070,
	0x1DCF3B0,
	0x1DCF690,
	0x1DCF970,
	0x1DCFC50,
	0x1DCFF30,
	0x1DDB758,
	0x1DDB4C4,
	0x1DDB5D0,
	0x1D98CE8,
	0x1D99790,
	0x1D8E1B8,
	0x1D9BA08,
	0x1D9AC00,
	0x1D9D784,
	0x1D979DC,
	0x1D97AE8,
	0x1D97BF4,
	0x1D97D00,
	0x1D97E0C,
	0x1D97F18,
	0x1D98024,
	0x1D98130,
	0x1D9823C,
	0x1D9D890,
	0x1D8E440,
	0x1D8E6C8,
	0x1D9D58C,
	0x1D9D698,
	0x1D9D99C,
	0x1D9EDAC,
	0x1D9EEB8,
	0x1D9EFC4,
	0x1D9F0D0,
	0x1D9F1DC,
	0x1D9F2E8,
	0x1D9F3F4,
	0x1D9F500,
	0x1D9F60C,
	0x1D9F718,
	0x1D9F824,
	0x1D9F930,
	0x1D9DCE0,
	0x1D9E028,
	0x1D9E370,
	0x1D9FAD8,
	0x1D9FC80,
	0x1D9FE20,
	0x1D99918,
	0x1D99AA0,
	0x1DBDAFC,
	0x1D9E990,
	0x1D9EB18,
	0x1D9ECA0,
	0x1D9E4F8,
	0x1D9E680,
	0x1D9E808,
	0x1D8C720,
	0x1D8CF68,
	0x1D8D7B0,
	0x1D8DFF8,
	0x1D99D28,
	0x1D9BB60,
	0x1D9BCB8,
	0x1D9C72C,
	0x1D9CB7C,
	0x1D9BFC8,
	0x1D9C2D8,
	0x1D9CE10,
	0x1D9D0A0,
	0x1D95A18,
	0x1D95B98,
	0x1D95D8C,
	0x1D95F7C,
	0x1D9616C,
	0x1D9635C,
	0x1D964D8,
	0x1D96658,
	0x1D8EA70,
	0x1D8F118,
	0x1D8F7C0,
	0x1D8ED70,
	0x1D8F418,
	0x1D8FAC0,
	0x1D91A44,
	0x1D91BC8,
	0x1D92CDC,
	0x1D93080,
	0x1D93728,
	0x1D93DD0,
	0x1D93380,
	0x1D93A28,
	0x1D940D0,
	0x1D949BC,
	0x1D95278,
	0x1D95898,
	0x1DC8540,
	0x1DC82C0,
	0x1DCA1D8,
	0x1DC9F58,
	0x1DC8EC8,
	0x1DC8C48,
	0x1DCAB60,
	0x1DCA8E0,
	0x1DC9850,
	0x1DC95D0,
	0x1DBAB38,
	0x1DB9E7C,
	0x1DB89CC,
	0x1DB785C,
	0x1DB64A0,
	0x1DB5184,
	0x1DB39F0,
	0x1DB2B84,
	0x1DBD8B0,
	0x1DBD690,
	0x1DBD4B4,
	0x1DBD2B8,
	0x1DBD160,
	0x1DBCF38,
	0x1DBC154,
	0x1DBBF0C,
	0x1DBBD10,
	0x1DBBB30,
	0x1DBAD48,
	0x1DBD9F0,
	0x1DB1BE0,
	0x1DB1AD4,
	0x1DB18D8,
	0x1DB12E4,
	0x1DB10E8,
	0x1DB0798,
	0x1DB05BC,
	0x1DB03C0,
	0x1DAFDC8,
	0x1DAFA3C,
	0x1DA7264,
	0x1DA6D10,
	0x1DA6390,
	0x1DA5418,
	0x1DA4F88,
	0x1DA4184,
	0x1DA36D8,
	0x1DAF554,
	0x1DAE3B0,
	0x1DADA5C,
	0x1DACB48,
	0x1DABBA0,
	0x1DAB24C,
	0x1DAA33C,
	0x1DA9428,
	0x1DA2AE0,
	0x1DA28C4,
	0x1DA2480,
	0x1DA2260,
	0x1DA1DB8,
	0x1DA1330,
	0x1DA08AC,
	0x1DA06AC,
	0x1D9FFB0,
	0x1DD0888,
	0x1DD0620,
	0x1DD03B8,
	0x1DD0150,
	0x1DD87AC,
	0x1DD82A0,
	0x1DD4C54,
	0x1DD4130,
	0x1DD305C,
	0x1DD2534,
	0x1DDA31C,
	0x1DD97F4,
	0x1DD684C,
	0x1DD5D28,
	0x1DDED00,
	0x1DDEF50,
	0x1DDF318,
	0x1DDF4B0,
	0x1BD9EE8,
	0x1C202E0,
	0x1C1FC70,
	0x1C1FA70,
	0x1C20490,
	0x1C20748,
	0x1C20A00,
	0x1C20CB8,
	0x1C20F70,
	0x1C21228,
	0x1C214E0,
	0x1C21798,
	0x1C21A50,
	0x1C21D08,
	0x1C21FC0,
	0x1C22278,
	0x1C22530,
	0x1C227E8,
	0x1C22D68,
	0x1C23248,
	0x1C2313C,
	0x1C23030,
	0x1C237C0,
	0x1C23A88,
	0x1C23D50,
	0x1C2402C,
	0x1AC0150,
	0x1AC1DA4,
	0x1A6BF60,
	0x1AB05C4,
	0x1AC39B8,
	0x1AC3C00,
	0x1AC3E48,
	0x1B044B0,
	0x1B29720,
	0x1B39510,
	0x1B39230,
	0x1B096F0,
	0x1B497D8,
	0x1B42300,
	0x1B09A18,
	0x1B4C268,
	0x1B421F4,
	0x1B82188,
	0x1AF838C,
	0x1AF8498,
	0x1AF8828,
	0x1B5BD30,
	0x1B5BC24,
	0x1B4BD74,
	0x1B878B8,
	0x1B4C02C,
	0x1B4D7EC,
	0x1B48840,
	0x1B54154,
	0x1B8EE1C,
	0x1B53808,
	0x1B92C04,
	0x1B93C88,
	0x1B93E48,
	0x1B94008,
	0x1B941D8,
	0x1B94328,
	0x1B944AC,
	0x1B94700,
	0x1B94948,
	0x1B94B90,
	0x1B94E68,
	0x1B950B0,
	0x1B952F8,
	0x1B95540,
	0x1B95788,
	0x1B959D0,
	0x1B95C18,
	0x1B95E60,
	0x1B960A8,
	0x1B962F0,
	0x1B96480,
	0x1B965D0,
	0x1B96720,
	0x1B96870,
	0x1B969C0,
	0x1B96B10,
	0x1B96C60,
	0x1B97180,
	0x1B972F0,
	0x1B97460,
	0x1B975B0,
	0x1B976D0,
	0x1B978A8,
	0x1B97A28,
	0x1B97B88,
	0x1B97CD8,
	0x1B97DF8,
	0x1B5D0A8,
	0x1A47840,
	0x1A46B88,
	0x19FBDAC,
	0x19FDD2C,
	0x19FDC20,
	0x19FD038,
	0x1A0D168,
	0x1A0B8E8,
	0x1A1D5D8,
	0x1A1D7F0,
	0x1A1DA08,
	0x1A1DC20,
	0x1A1DE38,
	0x1A1E050,
	0x1A27DF0,
	0x1C3C650,
	0x1C3B8C8,
	0x1C45D90,
	0x1C45008,
	0x1C26600,
	0x1C26210,
	0x1C25E20,
	0x1C25A30,
	0x1C25640,
	0x19D8BC0,
	0x1A44A14,
	0x1A454D4,
	0x1A3D8B8,
	0x1C26F48,
	0x1C27F58,
	0x1A47230,
	0x19FFC2C,
	0x19FEFB8,
	0x1A08848,
	0x1A06FF8,
	0x1C32A08,
	0x1C32860,
	0x1C326B8,
	0x1C2EE88,
	0x1C2ECE0,
	0x1C2EB38,
	0x1C36960,
	0x1C34EF0,
	0x1C34D48,
	0x1C34BA0,
	0x1C349F8,
	0x1C2A55C,
	0x1C29D20,
	0x1C290F8,
	0x1C28C4C,
	0x1C28538,
	0x1A26DB8,
	0x19CAF10,
	0x19CA3F0,
	0x19C7170,
	0x1990770,
	0x198A588,
	0x19616A0,
	0x1914B00,
	0x1929CB0,
	0x1928068,
	0x1918840,
	0x192FA10,
	0x1920ADC,
	0x1958230,
	0x19618F8,
	0x196149C,
	0x194FBC0,
	0x194FA38,
	0x194F8F0,
	0x192C15C,
	0x196A760,
	0x1969750,
	0x196AEC0,
	0x18751A8,
	0x18DBD88,
	0x18E48A4,
	0x18E8708,
	0x18ED868,
	0x18ED358,
	0x18EC6F0,
	0x18EEF08,
	0x180EB30,
	0x180E778,
	0x180E4F0,
	0x180E268,
	0x1811198,
	0x1811600,
	0x1811A68,
	0x181221C,
	0x1810D34,
	0x180F5A8,
	0x1810664,
	0x180F7C4,
	0x180FA00,
	0x180FB88,
	0x180FC94,
	0x180276C,
	0x1801EA8,
	0x18005D0,
	0x1800488,
	0x1800340,
	0x1800234,
	0x180001C,
	0x1802538,
	0x17F68B8,
	0x1803B24,
	0x1804EDC,
	0x17FA6B8,
	0x17FA5AC,
	0x17FA4A0,
	0x17FA3B4,
	0x17FA2C8,
	0x17FA1DC,
	0x17FA0F0,
	0x17F9FE4,
	0x17F9EF8,
	0x17F9E0C,
	0x17F9D20,
	0x17F9C34,
	0x17F9B28,
	0x17F9A1C,
	0x17F9930,
	0x17F9824,
	0x17F9718,
	0x17F962C,
	0x17F9540,
	0x17F9454,
	0x17F9368,
	0x17F927C,
	0x17F9190,
	0x17F90A4,
	0x17F8FB8,
	0x17F8ECC,
	0x17F8DE0,
	0x17F8CF4,
	0x17F8BE8,
	0x17F8ADC,
	0x17F89F0,
	0x17F8904,
	0x17F8818,
	0x17F872C,
	0x17F8640,
	0x17F8554,
	0x17F8468,
	0x17F835C,
	0x17F8250,
	0x17F8144,
	0x17F8058,
	0x17F7F6C,
	0x17F7E60,
	0x17F7D74,
	0x17F7C88,
	0x17FE8B8,
	0x17FE7AC,
	0x17FE6A0,
	0x17FE5B4,
	0x17FE4A8,
	0x17FE39C,
	0x17FE274,
	0x17FE168,
	0x17FE040,
	0x17FDF54,
	0x17FDE48,
	0x17FDD5C,
	0x17FDC50,
	0x17FDB44,
	0x17FDA38,
	0x17FD92C,
	0x17FD820,
	0x17FF858,
	0x17F7280,
	0x17F7174,
	0x17FF964,
	0x17F75D8,
	0x17F7930,
	0x1806294,
	0x1870FE0,
	0x18580D0,
	0x1857AC8,
	0x18541C0,
	0x1853F88,
	0x184F8D8,
	0x182EED8,
	0x182EDCC,
	0x183009C,
	0x182A74C,
	0x186DE44,
	0x182903C,
	0x1828BA8,
	0x1827D34,
	0x1827D08,
	0x1826ED4,
	0x1824CDC,
	0x1824100,
	0x1823640,
	0x18230E0,
	0x1822B80,
	0x1820EC8,
	0x181FD68,
	0x181F840,
	0x181EA3C,
	0x181887C,
	0x1815D58,
	0x1815928,
	0x17D21D8,
	0x17D13D8,
	0x17D1250,
	0x17D0F18,
	0x17D3A98,
	0x17D4CE0,
	0x17D4878,
	0x17DCF8C,
	0x17D9BB0,
	0x17D7550,
	0x17D6EB8,
	0x17D6820,
	0x17D6188,
	0x17D5AF0,
	0x17D5458,
	0x17DF510,
	0x17DE7F0,
	0x17DE618,
	0x17DE440,
	0x17DE268,
};