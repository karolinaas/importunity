cmake_minimum_required(VERSION 3.20.0)

if (CONFIG_UNITY_TEST)
    zephyr_compile_definitions(
        UNITY_INCLUDE_CONFIG_H
        )
    zephyr_include_directories(
        ${CMAKE_CURRENT_LIST_DIR}/unity_config
        ${CMAKE_CURRENT_LIST_DIR}/unity/src
        )
    zephyr_library_sources(
        ${CMAKE_CURRENT_LIST_DIR}/unity/src/unity.c
        ${CMAKE_CURRENT_LIST_DIR}/unity_config/suite_tear_down.c
    )
endif()