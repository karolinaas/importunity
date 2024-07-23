/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_STRINGS

#include "run_test_unity.h"
#include "test_unity_strings.c"

void run_test_unity_strings(void)
{
    RUN_TEST(testEqualStrings);
    RUN_TEST(testEqualStringsLen);
    RUN_TEST(testEqualStringsWithCarriageReturnsAndLineFeeds);
    RUN_TEST(testNotEqualString1);
    RUN_TEST(testNotEqualStringLen1);
    RUN_TEST(testNotEqualString2);
    RUN_TEST(testNotEqualStringLen2);
    RUN_TEST(testNotEqualString3);
    RUN_TEST(testNotEqualStringLen3);
    RUN_TEST(testNotEqualString4);
    RUN_TEST(testNotEqualStringLen4);
    RUN_TEST(testNotEqualString5);
    RUN_TEST(testNotEqualString_ExpectedStringIsNull);
    RUN_TEST(testNotEqualStringLen_ExpectedStringIsNull);
    RUN_TEST(testNotEqualString_ActualStringIsNull);
    RUN_TEST(testNotEqualStringLen_ActualStringIsNull);
    RUN_TEST(testNotEqualString_ExpectedStringIsLonger);
    RUN_TEST(testNotEqualString_ActualStringIsLonger);
    RUN_TEST(testEqualStringArrays);
    RUN_TEST(testNotEqualStringArray1);
    RUN_TEST(testNotEqualStringArray2);
    RUN_TEST(testNotEqualStringArray3);
    RUN_TEST(testNotEqualStringArray4);
    RUN_TEST(testNotEqualStringArray5);
    RUN_TEST(testNotEqualStringArray6);
    RUN_TEST(testEqualStringArrayIfBothNulls);
    RUN_TEST(testNotEqualStringArrayLengthZero);
    RUN_TEST(testEqualStringEachEqual);
    RUN_TEST(testNotEqualStringEachEqual1);
    RUN_TEST(testNotEqualStringEachEqual2);
    RUN_TEST(testNotEqualStringEachEqual3);
    RUN_TEST(testNotEqualStringEachEqual4);
    RUN_TEST(testNotEqualStringEachEqual5);
    RUN_TEST(testCstringsEscapeSequence);
}

#endif