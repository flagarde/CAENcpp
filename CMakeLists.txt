cmake_minimum_required(VERSION 3.16)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH}" "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(GetCMakeMM)
cmmm(VERSION "2.0" REPOSITORY "flagarde/CMakeMM" PROVIDER "gitlab" VERBOSITY VERBOSE)

cmmm_modules_list(REPOSITORY "flagarde/CMakeCM" PROVIDER "gitlab")

project(CAENcpp VERSION "1.0.0.0" DESCRIPTION "C++ wrapper for CAENlibs" HOMEPAGE_URL "https://github.com/flagarde/CAENcpp" LANGUAGES CXX)

include(PreventInSourceBuilds)
prevent_in_source_builds()

include(DefaultInstallPrefix)
default_install_prefix("${CMAKE_SOURCE_DIR}/bin")

include(Standards)
cxx_17()
c_11()

include(GNUInstallDirs)

include(CPM)
cpm()

if(NOT DEFINED CAENLIBS_REPOSITORY)
  set(CAENLIBS_REPOSITORY "https://gitlab.com/flagarde/CAENlibs.git")
endif()

if(NOT DEFINED CAENLIBS_TAG)
  set(CAENLIBS_TAG "main")
endif()

declare_option(REPOSITORY CAENlibs OPTION BUILD_TESTS VALUE OFF)
print_options(REPOSITORY  CAENlibs)

CPMAddPackage(NAME CAENlibs
              GIT_REPOSITORY ${CAENLIBS_REPOSITORY}
              GIT_TAG ${CAENLIBS_TAG}
              FETCHCONTENT_UPDATES_DISCONNECTED ${IS_OFFLINE}
              OPTIONS "${CAENlibs_OPTIONS}")

include(SourceLocation)
              
option(BUILD_TESTS "Build the tests" TRUE)
option(BUILD_EXAMPLES "Build the examples" TRUE)
option(BUILD_DOCS "Build the docs" TRUE)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS TRUE)

if(BUILD_TESTS)
  include(Doctest)
  add_subdirectory(tests)
endif()

add_subdirectory(src)

