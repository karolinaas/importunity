/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_PARAMETERIZEDDEMO

#include "run_test_unity.h"
#include "test_unity_parameterizedDemo.c"

void run_test_unity_parameterizedDemo(void) {
    RUN_TEST(test_demoParamFunction);
}

#endif