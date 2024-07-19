/*
 * Copyright 2024 NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/sys/printk.h>

/*
 * This function provides Twister (Zephyr's test runner script) integration.
 *
 * All it does is print out certain strings to the console depending on whether
 * any of the tests failed. Twister can then parse these strings which lets it
 * know if a test suite has passed or failed.
 */
int suiteTearDown(int num_failures) {
    if (num_failures == 0) {
        printk("UNITY PROJECT EXECUTION SUCCESSFUL\r\n");
    }
    else {
        printk("UNITY PROJECT EXECUTION FAILED\r\n");
    }

    return num_failures;
}