/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_FLOATS

#include "run_test_unity.h"
#include "test_unity_floats.c"

void run_test_unity_floats(void) {
    RUN_TEST(testFloatsWithinDelta);
}

#endif