set(TARGET FixtureSetUpTest)

add_executable(${TARGET} "")

set_target_properties(${TARGET}
    PROPERTIES
        OUTPUT_NAME fixture-setup-test
)

target_sources(${TARGET}
    PRIVATE src/setUp.cpp
)

target_link_libraries(${TARGET}
    PRIVATE GTest::gtest_main GTest::gmock_main
)

if (NOT CMAKE_CROSSCOMPILING)
    gtest_discover_tests(${TARGET} TEST_LIST fixtureSetUpTestList)
    set_property(
        DIRECTORY APPEND
        PROPERTY TEST_INCLUDE_FILES ${CMAKE_CURRENT_LIST_DIR}/setTestsOptions.cmake
    )
endif()



