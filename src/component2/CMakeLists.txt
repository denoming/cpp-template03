set(TARGET MyComponent2)

add_library(${TARGET} STATIC)
add_library(My::Component2 ALIAS ${TARGET})

set_target_properties(${TARGET}
    PROPERTIES
        OUTPUT_NAME component2
        EXPORT_NAME Component2
)

target_include_directories(${TARGET}
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
)

target_sources(${TARGET}
    PRIVATE include/component2/Component2.hpp
            src/Component2.cpp
)

target_compile_features(${TARGET} PUBLIC cxx_std_17)
