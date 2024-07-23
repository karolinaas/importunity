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
#endif
    // run_test_unity_core();
    // run_test_unity_doubles();
    // run_test_unity_floats();
    // run_test_unity_integers();
    // run_test_unity_integers_64();
    // run_test_unity_memory();
    // run_test_unity_parameterized();
    // run_test_unity_parameterizedDemo();
    // run_test_unity_strings();
    return UNITY_END();
}