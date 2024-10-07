set(TARGET ProjectConfig)

add_library(${TARGET} STATIC)
add_library(Project::Version ALIAS ${TARGET})

find_package(Git)
if (Git_FOUND)
    execute_process(
        COMMAND ${GIT_EXECUTABLE} rev-parse HEAD
        RESULT_VARIABLE result
        OUTPUT_VARIABLE Template03_GIT_HASH
        OUTPUT_STRIP_TRAILING_WHITESPACE
    )
endif()

target_sources(
    ${TARGET}
    PRIVATE version/ProjectVersion.hpp
            ${CMAKE_CURRENT_BINARY_DIR}/ProjectVersion.cpp
)

target_include_directories(
    ${TARGET}
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_compile_features(${TARGET} PUBLIC cxx_std_20)

configure_file(version/ProjectVersion.cpp.in ProjectVersion.cpp @ONLY)