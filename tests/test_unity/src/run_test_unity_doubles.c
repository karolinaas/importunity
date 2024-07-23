/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_DOUBLES

#include "run_test_unity.h"
#include "test_unity_doubles.c"

void run_test_unity_doubles(void) {
    RUN_TEST(testDoublesWithinDelta);
}

#endif