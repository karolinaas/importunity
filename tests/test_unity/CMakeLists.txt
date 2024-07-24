# Copyright 2024 NXP
# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(test_unity)

if(TEST_UNITY_ARRAYS)
    zephyr_compile_definitions(TEST_UNITY_ARRAYS)

elseif(TEST_UNITY_CORE)
    zephyr_compile_definitions(TEST_UNITY_CORE)

elseif(TEST_UNITY_DOUBLES)
    zephyr_compile_definitions(TEST_UNITY_DOUBLES)

elseif(TEST_UNITY_FLOATS)
    zephyr_compile_definitions(TEST_UNITY_FLOATS)

elseif(TEST_UNITY_INTEGERS)
    zephyr_compile_definitions(TEST_UNITY_INTEGERS)

elseif(TEST_UNITY_INTEGERS_64)
    zephyr_compile_definitions(TEST_UNITY_INTEGERS_64)

elseif(TEST_UNITY_MEMORY)
    zephyr_compile_definitions(TEST_UNITY_MEMORY)

elseif(TEST_UNITY_PARAMETERIZED)
    zephyr_compile_definitions(TEST_UNITY_PARAMETERIZED)

elseif(TEST_UNITY_PARAMETERIZEDDEMO)
    zephyr_compile_definitions(TEST_UNITY_PARAMETERIZEDDEMO)

elseif(TEST_UNITY_STRINGS)
    zephyr_compile_definitions(TEST_UNITY_STRINGS)
    
endif()

zephyr_include_directories(${CMAKE_CURRENT_LIST_DIR}/../../unity/test/tests)

FILE(GLOB app_sources src/*.c)
target_sources(app PRIVATE ${app_sources})