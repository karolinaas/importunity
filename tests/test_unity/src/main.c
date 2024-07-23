/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "unity.h"
#include "run_test_unity.h"

int main(void)
{
    UNITY_BEGIN();

#ifdef TEST_UNITY_ARRAYS
    run_test_unity_arrays();
#elif TEST_UNITY_CORE
    run_test_unity_core();
#elif TEST_UNITY_DOUBLES
    run_test_unity_doubles();
#elif TEST_UNITY_FLOATS
    run_test_unity_floats();
#elif TEST_UNITY_INTEGERS
    run_test_unity_integers();
#elif TEST_UNITY_INTEGERS_64
    run_test_unity_integers_64();
#elif TEST_UNITY_MEMORY
    run_test_unity_memory();
#elif TEST_UNITY_PARAMETERIZED
    run_test_unity_parameterized();
#elif TEST_UNITY_PARAMETERIZEDDEMO
    run_test_unity_parameterizedDemo();
#elif TEST_UNITY_STRINGS
    run_test_unity_strings();
#endif

    return UNITY_END();
}