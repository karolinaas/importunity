/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_CORE

#include "run_test_unity.h"
#include "test_unity_core.c"

void run_test_unity_core(void) {
    RUN_TEST(testUnitySizeInitializationReminder);
}

#endif