#include <zephyr/sys/printk.h>

int suiteTearDown(int num_failures) {
    if (num_failures == 0) {
        printk("UNITY PROJECT EXECUTION SUCCESSFUL\r\n");
    }
    else {
        printk("UNITY PROJECT EXECUTION FAILED\r\n");
    }

    return num_failures;
}