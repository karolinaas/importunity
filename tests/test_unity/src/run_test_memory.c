/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_MEMORY

#include "run_test_unity.h"
#include "test_unity_memory.c"

void run_test_unity_memory(void) {
    RUN_TEST(testEqualMemory);
}

#endif