string(TOLOWER "${CMAKE_SYSTEM_NAME}_${CMAKE_SYSTEM_PROCESSOR}" PLATFORM)

find_path(H323PLUS_INCLUDE openh323buildopts.h PATHS $ENV{OPENH323DIR}/include)
find_library(H323PLUS_LIBRARY NAME h323_${PLATFORM}__s PATHS $ENV{OPENH323DIR}/lib)
if (H323PLUS_INCLUDE AND H323PLUS_LIBRARY)
	MESSAGE(STATUS "H323Plus found: ${H323PLUS_INCLUDE}, ${H323PLUS_LIBRARY}")
else ()
	MESSAGE(FATAL_ERROR "H323Plus not found")
endif ()
