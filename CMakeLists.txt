cmake_minimum_required(VERSION 3.28)

project(Template03
    VERSION 1.0.0
    DESCRIPTION "Multi component binary application"
)

include(cmake/ProjectOptions.cmake)
include(cmake/ProjectConfigs.cmake)
include(cmake/ProjectInstall.cmake)

add_subdirectory(config)
add_subdirectory(src)
if (TEMPLATE03_ENABLE_TESTS)
    add_subdirectory(test)
endif()
