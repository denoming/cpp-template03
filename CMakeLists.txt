cmake_minimum_required(VERSION 3.28)

project(Template03
    VERSION 1.0.0
    DESCRIPTION "Multi component binary application"
)

include(cmake/ProjectOptions.cmake)
include(cmake/ProjectConfigs.cmake)
if(PROJECT_IS_TOP_LEVEL)
    include(cmake/ProjectInstall.cmake)
endif()

add_subdirectory(config)
add_subdirectory(src)
if (TEMPLATE03_ENABLE_TESTS)
    add_subdirectory(test)
endif()
