cmake_minimum_required(VERSION 3.20.0)

if (CONFIG_UNITY_TEST)
    zephyr_compile_definitions(UNITY_INCLUDE_CONFIG_H)
    zephyr_include_directories(../Unity/src .)
    zephyr_library_sources(
        ../Unity/src/unity.c
        suite_tear_down.c
    )
endif()