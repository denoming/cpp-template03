set(TARGET MyComponent1)

add_library(${TARGET} STATIC)
add_library(My::Component1 ALIAS ${TARGET})

set_target_properties(${TARGET}
    PROPERTIES
        OUTPUT_NAME component1
        EXPORT_NAME Component1
)

target_include_directories(${TARGET}
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
)

target_sources(${TARGET}
    PRIVATE include/component1/Component1.hpp
            src/Component1.cpp
)

target_compile_features(${TARGET} PUBLIC cxx_std_17)
