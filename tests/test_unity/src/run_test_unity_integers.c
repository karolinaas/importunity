/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_INTEGERS

#include "run_test_unity.h"
#include "test_unity_integers.c"

void run_test_unity_integers(void) {
    RUN_TEST(testNotEqualInts);
}

#endif