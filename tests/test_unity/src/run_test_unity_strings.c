/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_STRINGS

#include "run_test_unity.h"
#include "test_unity_strings.c"

void run_test_unity_strings(void) {
    RUN_TEST(testEqualStrings);
}

#endif