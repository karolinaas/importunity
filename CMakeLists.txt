# Copyright 2024 NXP
# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)

if (CONFIG_UNITY_TEST)
    # This definition tells Unity to use Importunity's custom unity_config.h file
    zephyr_compile_definitions(UNITY_INCLUDE_CONFIG_H)

    # We must tell Zephyr where to find header files for Unity as well as Importunity 
    zephyr_include_directories(
        ${CMAKE_CURRENT_LIST_DIR}/unity/src
        ${CMAKE_CURRENT_LIST_DIR}/unity_config
        )
    # And the same goes for the source files
    zephyr_library_sources(
        ${CMAKE_CURRENT_LIST_DIR}/unity/src/unity.c
        ${CMAKE_CURRENT_LIST_DIR}/unity_config/suite_tear_down.c
    )
endif()