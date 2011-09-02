#include <stdio.h>
#include <stdlib.h>

#include "assert_extensions.h"

int check_equal(int expected, int got) {
    return expected == got;
}

void assert_equal(int expected, int got) {
    if (!check_equal(expected, got)) {
        printf("Assertion error: was expecting %d, got %d.", expected, got);
        exit(1);
    }
}
