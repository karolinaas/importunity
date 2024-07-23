/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_MEMORY

#include "run_test_unity.h"
#include "test_unity_memory.c"

void run_test_unity_memory(void)
{
    RUN_TEST(testEqualMemory);
    RUN_TEST(testNotEqualMemory1);
    RUN_TEST(testNotEqualMemory2);
    RUN_TEST(testNotEqualMemory3);
    RUN_TEST(testNotEqualMemory4);
    RUN_TEST(testNotEqualMemoryLengthZero);
}

#endif