/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifdef TEST_UNITY_DOUBLES

#include "run_test_unity.h"
#include "test_unity_doubles.c"

void run_test_unity_doubles(void)
{
    RUN_TEST(testDoublesWithinDelta);
    RUN_TEST(testDoublesNotWithinDelta);
    RUN_TEST(testDoublesEqual);
    RUN_TEST(testDoublesNotEqual);
    RUN_TEST(testDoublesNotEqualNegative1);
    RUN_TEST(testDoublesNotEqualNegative2);
    RUN_TEST(testDoublesNotEqualActualNaN);
    RUN_TEST(testDoublesNotEqualExpectedNaN);
    RUN_TEST(testDoublesEqualBothNaN);
    RUN_TEST(testDoublesNotEqualInfNaN);
    RUN_TEST(testDoublesNotEqualNaNInf);
    RUN_TEST(testDoublesNotEqualActualInf);
    RUN_TEST(testDoublesNotEqualExpectedInf);
    RUN_TEST(testDoublesEqualBothInf);
    RUN_TEST(testDoublesNotEqualPlusMinusInf);
    RUN_TEST(testDoublesGreaterThan);
    RUN_TEST(testDoublesGreaterThanInf);
    RUN_TEST(testDoublesNotGreaterThan);
    RUN_TEST(testDoublesNotGreaterThanNanActual);
    RUN_TEST(testDoublesNotGreaterThanNanThreshold);
    RUN_TEST(testDoublesNotGreaterThanNanBoth);
    RUN_TEST(testDoublesNotGreaterThanInfActual);
    RUN_TEST(testDoublesNotGreaterThanNegInf);
    RUN_TEST(testDoublesNotGreaterThanBothInf);
    RUN_TEST(testDoublesNotGreaterThanBothNegInf);
    RUN_TEST(testDoublesGreaterOrEqual);
    RUN_TEST(testDoublesGreaterOrEqualInf);
    RUN_TEST(testDoublesNotGreaterOrEqual);
    RUN_TEST(testDoublesNotGreaterOrEqualNanActual);
    RUN_TEST(testDoublesNotGreaterOrEqualNanThreshold);
    RUN_TEST(testDoublesGreaterOrEqualNanBoth);
    RUN_TEST(testDoublesNotGreaterOrEqualInfActual);
    RUN_TEST(testDoublesNotGreaterOrEqualNegInf);
    RUN_TEST(testDoublesGreaterOrEqualBothInf);
    RUN_TEST(testDoublesGreaterOrEqualBothNegInf);
    RUN_TEST(testDoublesLessThan);
    RUN_TEST(testDoublesLessThanInf);
    RUN_TEST(testDoublesNotLessThan);
    RUN_TEST(testDoublesNotLessThanNanActual);
    RUN_TEST(testDoublesNotLessThanNanThreshold);
    RUN_TEST(testDoublesNotLessThanNanBoth);
    RUN_TEST(testDoublesNotLessThanInf);
    RUN_TEST(testDoublesNotLessThanNegInf);
    RUN_TEST(testDoublesNotLessThanBothInf);
    RUN_TEST(testDoublesNotLessThanBothNegInf);
    RUN_TEST(testDoublesLessOrEqual);
    RUN_TEST(testDoublesLessOrEqualInf);
    RUN_TEST(testDoublesNotLessOrEqual);
    RUN_TEST(testDoublesNotLessOrEqualNanActual);
    RUN_TEST(testDoublesNotLessOrEqualNanThreshold);
    RUN_TEST(testDoublesLessOrEqualNanBoth);
    RUN_TEST(testDoublesNotLessOrEqualInf);
    RUN_TEST(testDoublesNotLessOrEqualNegInf);
    RUN_TEST(testDoublesLessOrEqualBothInf);
    RUN_TEST(testDoublesLessOrEqualBothNegInf);
    RUN_TEST(testDoubleIsPosInf1);
    RUN_TEST(testDoubleIsPosInf2);
    RUN_TEST(testDoubleIsNegInf1);
    RUN_TEST(testDoubleIsNegInf2);
    RUN_TEST(testDoubleIsNotPosInf1);
    RUN_TEST(testDoubleIsNotPosInf2);
    RUN_TEST(testDoubleIsNotNegInf);
    RUN_TEST(testDoubleIsNan1);
    RUN_TEST(testDoubleIsNan2);
    RUN_TEST(testDoubleIsNotNan1);
    RUN_TEST(testDoubleIsNotNan2);
    RUN_TEST(testDoubleInfIsNotNan);
    RUN_TEST(testDoubleNanIsNotInf);
    RUN_TEST(testDoubleIsDeterminate1);
    RUN_TEST(testDoubleIsDeterminate2);
    RUN_TEST(testDoubleIsNotDeterminate1);
    RUN_TEST(testDoubleIsNotDeterminate2);
    RUN_TEST(testDoubleTraitFailsOnInvalidTrait);
    RUN_TEST(testEqualDoubleArrays);
    RUN_TEST(testNotEqualDoubleArraysExpectedNull);
    RUN_TEST(testNotEqualDoubleArraysActualNull);
    RUN_TEST(testNotEqualDoubleArrays1);
    RUN_TEST(testNotEqualDoubleArrays2);
    RUN_TEST(testNotEqualDoubleArrays3);
    RUN_TEST(testNotEqualDoubleArraysNegative1);
    RUN_TEST(testNotEqualDoubleArraysNegative2);
    RUN_TEST(testNotEqualDoubleArraysNegative3);
    RUN_TEST(testEqualDoubleArraysNaN);
    RUN_TEST(testEqualDoubleArraysInf);
    RUN_TEST(testNotEqualDoubleArraysLengthZero);
    RUN_TEST(testDoubleArraysWithin);
    RUN_TEST(testDoubleArraysWithinUnusualDelta);
    RUN_TEST(testEqualDoubleEachEqual);
    RUN_TEST(testNotEqualDoubleEachEqualActualNull);
    RUN_TEST(testNotEqualDoubleEachEqual1);
    RUN_TEST(testNotEqualDoubleEachEqual2);
    RUN_TEST(testNotEqualDoubleEachEqual3);
    RUN_TEST(testNotEqualDoubleEachEqualNegative1);
    RUN_TEST(testNotEqualDoubleEachEqualNegative2);
    RUN_TEST(testNotEqualDoubleEachEqualNegative3);
    RUN_TEST(testEqualDoubleEachEqualNaN);
    RUN_TEST(testEqualDoubleEachEqualInf);
    RUN_TEST(testNotEqualDoubleEachEqualLengthZero);
    RUN_TEST(testDoublePrinting);
    RUN_TEST(testDoublePrintingRoundTiesToEven);
    RUN_TEST(testDoublePrintingInfinityAndNaN);
}

#endif