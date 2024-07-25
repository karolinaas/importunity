/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/*
 * Custom UNITY_END macro is needed to retain vanilla Unity usage while also
 * providing Twister integration
 */
#define UNITY_END() suiteTearDown(UnityEnd())

#define UNITY_OUTPUT_COLOR