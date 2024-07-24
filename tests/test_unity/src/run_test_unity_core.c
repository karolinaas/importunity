/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_CORE

#include "run_test_unity.h"
#include "test_unity_core.c"

void run_test_unity_core(void)
{
    RUN_TEST(testUnitySizeInitializationReminder);
    RUN_TEST(testPassShouldEndImmediatelyWithPass);
    RUN_TEST(testPassShouldEndImmediatelyWithPassAndMessage);
    RUN_TEST(testMessageShouldDisplayMessageWithoutEndingAndGoOnToPass);
    RUN_TEST(testMessageShouldDisplayMessageWithoutEndingAndGoOnToFail);
    RUN_TEST(testTrue);
    RUN_TEST(testFalse);
    RUN_TEST(testSingleStatement);
    RUN_TEST(testPreviousPass);
    RUN_TEST(testNotVanilla);
    RUN_TEST(testNotTrue);
    RUN_TEST(testNotFalse);
    RUN_TEST(testNotUnless);
    RUN_TEST(testNotNotEqual);
    RUN_TEST(testFail);
    RUN_TEST(testIsNull);
    RUN_TEST(testIsNullShouldFailIfNot);
    RUN_TEST(testNotNullShouldFailIfNULL);
    RUN_TEST(testIsEmpty);
    RUN_TEST(testIsEmptyShouldFailIfNot);
    RUN_TEST(testNotEmptyShouldFailIfEmpty);
    RUN_TEST(testIgnore);
    RUN_TEST(testIgnoreMessage);
    RUN_TEST(testProtection);
    RUN_TEST(testIgnoredAndThenFailInTearDown);
    RUN_TEST(testFailureCountIncrementsAndIsReturnedAtEnd);
    RUN_TEST(testThatDetailsCanBeHandleOneDetail);
    RUN_TEST(testThatDetailsCanHandleTestFail);
    RUN_TEST(testThatDetailsCanBeHandleTwoDetails);
    RUN_TEST(testThatDetailsCanBeHandleSingleDetailClearingTwoDetails);
}

#endif