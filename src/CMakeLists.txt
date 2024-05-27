include (GNUInstallDirs)

set(TARGET MyCompositeApp)

add_executable(${TARGET} "")
add_executable(My::CompositeApp ALIAS ${TARGET})

set_target_properties(${TARGET}
    PROPERTIES
        OUTPUT_NAME my-composite-app
)

target_sources(${TARGET}
    PRIVATE
        main.cpp
)

target_link_libraries(${TARGET} Project::Version My::Component1 My::Component2)

target_compile_features(${TARGET} PRIVATE cxx_std_17)

add_subdirectory(component1)
add_subdirectory(component2)

install(
    TARGETS ${TARGET}
    COMPONENT MyCompositeApp
)
