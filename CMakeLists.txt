##---------------------------------------------------------------------------
## Author:      Sean D'Epagnier
## Copyright:   
## License:     GPLv3+
##---------------------------------------------------------------------------
 
# define minimum cmake version
CMAKE_MINIMUM_REQUIRED(VERSION 2.6.2)

PROJECT(rupa_pi)
SET(PACKAGE_NAME rupa_pi)
SET(VERBOSE_NAME RUPA)
SET(TITLE_NAME RUPA)
SET(CPACK_PACKAGE_CONTACT "Tristan Dewalle ")

SET(BUNDLE_DATA FALSE)

INCLUDE( VERSION.cmake )
SET(VERSION_MAJOR ${PLUGIN_VERSION_MAJOR})
SET(VERSION_MINOR ${PLUGIN_VERSION_MINOR})
SET(VERSION_PATCH ${PLUGIN_VERSION_PATCH})
SET(VERSION_DATE ${PLUGIN_VERSION_DATE})

SET(PLUGIN_VERSION "${PLUGIN_VERSION_MAJOR}.${PLUGIN_VERSION_MINOR}.${PLUGIN_VERSION_PATCH}" )

INCLUDE("cmake/PluginConfigure.cmake")
#INCLUDE_DIRECTORIES(. "/usr/include/cppconn")
#LINK_DIRECTORIES("/usr/lib/" "mysqlcppconn")
#TARGET_LINK_LIBRARIES(watchdog_pi mysqlcppconn)

SET(SRC_RUPA
            src/watchdog_pi.cpp
	    #src/watchdog_pi.cpp
	    #src/WatchdogDialog.cpp
	    #src/WatchdogPropertiesDialog.cpp
	    #src/ConfigurationDialog.cpp
	    #src/NewAlarmDialog.cpp
	    #src/EditAlarmDialog.cpp
	    #src/Alarm.cpp
	    #src/WatchdogUI.cpp
            src/icons.cpp
            src/ODAPI.h
            src/wddc.cpp
            src/TexFont.cpp
	    src/RUPA_Automatic_Burst.cpp
	    src/RUPA_Burst_Editing.cpp
	    src/RUPA_Campaign.cpp
	    src/RUPA_Change_Validation_State.cpp
	    src/RUPA_Manage_Campaign.cpp
	    src/RUPA_New_Campaign.cpp
	    src/RUPA_Semi_Automatic_Burst.cpp
	    src/RUPAUI.cpp
	    src/RUPA_Warning_Delete_Burst.cpp
	    src/RUPA_Warning_Delete_Campaign.cpp
	    src/RUPA_Warning_Delete_Measurement.cpp
	    src/RUPA_Utility.cpp
	    src/RUPA_Manage_Structure.cpp
	    src/RUPA_Manage_Transponder.cpp
	    src/RUPA_Setup_Structure.cpp
	    src/RUPA_RS232.cpp

	)

IF(WIN32)
SET(SRC_JSON
            src/wxJSON/jsonval.cpp
            src/wxJSON/jsonreader.cpp
            src/wxJSON/jsonwriter.cpp)
ENDIF(WIN32)

IF(UNIX)
 INCLUDE("cmake/FindTinyXML.cmake")
 FIND_PACKAGE(TinyXML QUIET)
ENDIF(UNIX)

IF(TINYXML_FOUND)
 message (STATUS "Building with system tinyxml")
 INCLUDE_DIRECTORIES(${TINYXML_INCLUDE_DIR})
 ADD_LIBRARY(${PACKAGE_NAME} SHARED ${SRC_RUPA} ${SRC_JSON})
 TARGET_LINK_LIBRARIES(${PACKAGE_NAME} ${TINYXML_LIBRARIES})
ELSE(TINYXML_FOUND)
 message (STATUS "Building with embedded tinyxml")
 INCLUDE_DIRECTORIES(src/tinyxml/)
 SET(SRC_LTINYXML
            src/tinyxml/tinyxml.cpp
            src/tinyxml/tinyxmlparser.cpp
            src/tinyxml/tinyxmlerror.cpp
 )
 INCLUDE_DIRECTORIES(/usr/local/lib/libftd2xx.so)
 ADD_LIBRARY(${PACKAGE_NAME} SHARED ${SRC_RUPA} ${SRC_JSON} ${SRC_LTINYXML} )
 #LINK_DIRECTORIES(/usr/local/lib/libftd2xx.so)
ENDIF(TINYXML_FOUND)
ADD_DEFINITIONS(-DTIXML_USE_STL)

INCLUDE("cmake/PluginInstall.cmake")
INCLUDE("cmake/PluginLocalization.cmake")
INCLUDE("cmake/PluginPackage.cmake")
#ADD_LIBRARY(
#INCLUDE("/usr/local/include")
#INCLUDE("/usr/local/include/cppconn")
