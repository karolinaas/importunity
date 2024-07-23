/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include "unity.h"

void setUp(void) {

}

void tearDown(void) {

}

void test_assert(void) {
    TEST_ASSERT_TRUE_MESSAGE(1, "1 was false");
    TEST_ASSERT_FALSE_MESSAGE(0, "0 was true");
    TEST_ASSERT_NULL_MESSAGE(NULL, "NULL was not NULL");
    TEST_ASSERT_NOT_NULL_MESSAGE("foo", "\"foo\" was NULL");
    TEST_ASSERT_EQUAL_INT_MESSAGE(1, 1, "1 was not equal to 1");
    TEST_ASSERT_EQUAL_PTR_MESSAGE(NULL, NULL, "NULL ptr was not equal to NULL ptr");
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_assert);
    return UNITY_END();
}