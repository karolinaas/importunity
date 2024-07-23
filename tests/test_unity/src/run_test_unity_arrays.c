/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_ARRAYS

#include "run_test_unity.h"
#include "test_unity_arrays.c"

void run_test_unity_arrays(void) {
    RUN_TEST(testInt64ArrayWithinDelta);
    RUN_TEST(testInt64ArrayWithinDeltaAndMessage);
    RUN_TEST(testInt64ArrayNotWithinDelta);
}

#endif
