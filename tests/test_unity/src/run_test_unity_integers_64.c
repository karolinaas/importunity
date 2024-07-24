/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_INTEGERS_64

#include "run_test_unity.h"
#include "test_unity_integers_64.c"

void run_test_unity_integers_64(void)
{
    RUN_TEST(testInt64ArrayWithinDelta);
    RUN_TEST(testInt64ArrayWithinDeltaAndMessage);
    RUN_TEST(testInt64ArrayNotWithinDelta);
    RUN_TEST(testInt64ArrayNotWithinDeltaAndMessage);
    RUN_TEST(testInt64ArrayWithinDeltaPointless);
    RUN_TEST(testInt64ArrayWithinDeltaPointlessAndMessage);
    RUN_TEST(testInt64ArrayWithinDeltaExpectedNull);
    RUN_TEST(testInt64ArrayWithinDeltaExpectedNullAndMessage);
    RUN_TEST(testInt64ArrayWithinDeltaActualNull);
    RUN_TEST(testInt64ArrayWithinDeltaActualNullAndMessage);
    RUN_TEST(testInt64ArrayWithinDeltaSamePointer);
    RUN_TEST(testInt64ArrayWithinDeltaSamePointerAndMessage);
    RUN_TEST(testUInt64ArrayWithinDelta);
    RUN_TEST(testUInt64ArrayWithinDeltaAndMessage);
    RUN_TEST(testUInt64ArrayNotWithinDelta);
    RUN_TEST(testUInt64ArrayNotWithinDeltaAndMessage);
    RUN_TEST(testUInt64ArrayWithinDeltaPointless);
    RUN_TEST(testUInt64ArrayWithinDeltaPointlessAndMessage);
    RUN_TEST(testUInt64ArrayWithinDeltaExpectedNull);
    RUN_TEST(testUInt64ArrayWithinDeltaExpectedNullAndMessage);
    RUN_TEST(testUInt64ArrayWithinDeltaActualNull);
    RUN_TEST(testUInt64ArrayWithinDeltaActualNullAndMessage);
    RUN_TEST(testUInt64ArrayWithinDeltaSamePointer);
    RUN_TEST(testUInt64ArrayWithinDeltaSamePointerAndMessage);
    RUN_TEST(testHEX64ArrayWithinDelta);
    RUN_TEST(testHEX64ArrayWithinDeltaAndMessage);
    RUN_TEST(testHEX64ArrayNotWithinDelta);
    RUN_TEST(testHEX64ArrayNotWithinDeltaAndMessage);
    RUN_TEST(testHEX64ArrayWithinDeltaPointless);
    RUN_TEST(testHEX64ArrayWithinDeltaPointlessAndMessage);
    RUN_TEST(testHEX64ArrayWithinDeltaExpectedNull);
    RUN_TEST(testHEX64ArrayWithinDeltaExpectedNullAndMessage);
    RUN_TEST(testHEX64ArrayWithinDeltaActualNull);
    RUN_TEST(testHEX64ArrayWithinDeltaActualNullAndMessage);
    RUN_TEST(testHEX64ArrayWithinDeltaSamePointer);
    RUN_TEST(testHEX64ArrayWithinDeltaSamePointerAndMessage);
    RUN_TEST(testEqualHex64s);
    RUN_TEST(testEqualUint64s);
    RUN_TEST(testEqualInt64s);
    RUN_TEST(testNotEqualHex64s);
    RUN_TEST(testNotEqualUint64s);
    RUN_TEST(testNotEqualInt64s);
    RUN_TEST(testNotEqualHex64sIfSigned);
    RUN_TEST(testHEX64sWithinDelta);
    RUN_TEST(testHEX32sWithinDeltaShouldIgnoreSign);
    RUN_TEST(testHEX64sNotWithinDelta);
    RUN_TEST(testHEX64sNotWithinDeltaEvenThoughASignedIntWouldPass);
    RUN_TEST(testUINT64sWithinDelta);
    RUN_TEST(testUINT64sNotWithinDelta);
    RUN_TEST(testUINT64sNotWithinDeltaEvenThoughASignedIntWouldPass);
    RUN_TEST(testINT64sWithinDelta);
    RUN_TEST(testINT64sNotWithinDelta);
    RUN_TEST(testINT64sNotWithinDeltaAndDifferenceOverflows);
    RUN_TEST(testPrintNumbersInt64);
    RUN_TEST(testPrintNumbersUInt64);
}

#endif