# gcc (and other Unix-like compilers, e.g. MinGW)

# Compiler flag modules.
INCLUDE(CheckCCompilerFlag)
INCLUDE(CheckCXXCompilerFlag)

# Check what flag is needed for C99 support.
INCLUDE(CheckC99CompilerFlag)
CHECK_C99_COMPILER_FLAG(MODLOADER_C99_CFLAG)

# Check what flag is needed for C++ 2011 support.
INCLUDE(CheckCXX11CompilerFlag)
CHECK_CXX11_COMPILER_FLAG(MODLOADER_CXX11_CXXFLAG)

# Disable C++ RTTI.
INCLUDE(CheckCXXNoRTTICompilerFlag)
CHECK_CXX_NO_RTTI_COMPILER_FLAG(MODLOADER_CXX_NO_RTTI_CXXFLAG)

# Disable C++ exceptions.
INCLUDE(CheckCXXNoExceptionsCompilerFlag)
CHECK_CXX_NO_EXCEPTIONS_COMPILER_FLAG(MODLOADER_CXX_NO_EXCEPTIONS_CXXFLAG)

SET(MODLOADER_C_FLAGS_COMMON "${MODLOADER_C99_CFLAG}")
SET(MODLOADER_CXX_FLAGS_COMMON "${MODLOADER_CXX11_CXXFLAG} ${MODLOADER_CXX_NO_RTTI_CFLAG} ${MODLOADER_CXX_NO_EXCEPTIONS_CFLAG}")
UNSET(MODLOADER_C99_CFLAG)
UNSET(MODLOADER_CXX11_CXXFLAG)
UNSET(MODLOADER_CXX_NO_RTTI_CFLAG)
UNSET(MODLOADER_CXX_NO_EXCEPTIONS_CFLAG)

# Test for common CFLAGS and CXXFLAGS.
FOREACH(FLAG_TEST "-Wall" "-Wextra" "-fstrict-aliasing" "-fvisibility=hidden")
	CHECK_C_COMPILER_FLAG("${FLAG_TEST}" CFLAG_${FLAG_TEST})
	IF(CFLAG_${FLAG_TEST})
		SET(MODLOADER_C_FLAGS_COMMON "${MODLOADER_C_FLAGS_COMMON} ${FLAG_TEST}")
	ENDIF(CFLAG_${FLAG_TEST})
	UNSET(CFLAG_${FLAG_TEST})
	
	CHECK_CXX_COMPILER_FLAG("${FLAG_TEST}" CXXFLAG_${FLAG_TEST})
	IF(CXXFLAG_${FLAG_TEST})
		SET(MODLOADER_CXX_FLAGS_COMMON "${MODLOADER_CXX_FLAGS_COMMON} ${FLAG_TEST}")
	ENDIF(CXXFLAG_${FLAG_TEST})
	UNSET(CXXFLAG_${FLAG_TEST})
ENDFOREACH()

# Test for common CXXFLAGS.
FOREACH(FLAG_TEST "-fvisibility-inlines-hidden")
	CHECK_CXX_COMPILER_FLAG("${FLAG_TEST}" CXXFLAG_${FLAG_TEST})
	IF(CXXFLAG_${FLAG_TEST})
		SET(MODLOADER_CXX_FLAGS_COMMON "${MODLOADER_CXX_FLAGS_COMMON} ${FLAG_TEST}")
	ENDIF(CXXFLAG_${FLAG_TEST})
	UNSET(CXXFLAG_${FLAG_TEST})
ENDFOREACH()

# Test for common LDFLAGS.
# TODO: Doesn't work on OS X. (which means it's not really testing it!)
SET(MODLOADER_EXE_LINKER_FLAGS_COMMON "")
IF(NOT APPLE)
	FOREACH(FLAG_TEST "-Wl,-O1" "-Wl,--sort-common" "-Wl,--as-needed")
		CHECK_C_COMPILER_FLAG("${FLAG_TEST}" LDFLAG_${FLAG_TEST})
		IF(LDFLAG_${FLAG_TEST})
			SET(MODLOADER_EXE_LINKER_FLAGS_COMMON "${MODLOADER_EXE_LINKER_FLAGS_COMMON} ${FLAG_TEST}")
		ENDIF(LDFLAG_${FLAG_TEST})
		UNSET(LDFLAG_${FLAG_TEST})
	ENDFOREACH()
ENDIF(NOT APPLE)
SET(MODLOADER_SHARED_LINKER_FLAGS_COMMON "${MODLOADER_EXE_LINKER_FLAGS_COMMON}")

# Debug/release flags.
SET(MODLOADER_C_FLAGS_DEBUG "-O0 -ggdb -DDEBUG -D_DEBUG")
SET(MODLOADER_CXX_FLAGS_DEBUG "-O0 -ggdb -DDEBUG -D_DEBUG")
SET(MODLOADER_C_FLAGS_RELEASE "-O2 -ggdb -DNDEBUG")
SET(MODLOADER_CXX_FLAGS_RELEASE "-O2 -ggdb -DNDEBUG")
