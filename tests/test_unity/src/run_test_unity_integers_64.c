/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_INTEGERS_64

#include "run_test_unity.h"
#include "test_unity_integers_64.c"

void run_test_unity_integers_64(void) {
    RUN_TEST(testInt64ArrayWithinDeltaSamePointer);
}

#endif