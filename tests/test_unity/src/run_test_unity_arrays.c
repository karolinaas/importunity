/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "run_test_unity.h"
#include "test_unity_arrays.c"
// #include "test_unity_core.c"
// #include "test_unity_doubles.c"
// #include "test_unity_floats.c"
// #include "test_unity_integers.c"
// #include "test_unity_integers_64.c"
// #include "test_unity_memory.c"
// #include "test_unity_parameterized.c"
// #include "test_unity_parameterizedDemo.c"
// #include "test_unity_strings.c"


void run_test_unity_arrays(void) {
    RUN_TEST(testInt64ArrayWithinDelta);
    RUN_TEST(testInt64ArrayWithinDeltaAndMessage);
    RUN_TEST(testInt64ArrayNotWithinDelta);
}

// void run_test_unity_doubles(void) {
//     RUN_TEST(testDoublesWithinDelta);
// }

// void run_test_unity_floats(void) {
//     RUN_TEST(testFloatsWithinDelta);
// }

// void run_test_unity_integers(void) {
//     RUN_TEST(testNotEqualInts);
// }

// void run_test_unity_integers_64(void) {
//     RUN_TEST(testInt64ArrayWithinDeltaSamePointer);
// }

// void run_test_unity_memory(void) {
//     RUN_TEST(testEqualMemory);
// }

// void run_test_unity_parameterized(void) {
//     RUN_TEST(test_TheseShouldAllPass);
// }

// void run_test_unity_parameterizedDemo(void) {
//     RUN_TEST(test_demoParamFunction);
// }

// void run_test_unity_strings(void) {
//     RUN_TEST(testEqualStrings);
// }