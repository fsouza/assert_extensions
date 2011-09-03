#include <stdio.h>
#include <assert.h>
#include "assert_extensions.h"

static int test_count = 0;

void test_check_equal_should_return_non_zero_for_equal_int_values() {
    test_count++;

    printf("1 should equal 1... ");
    assert(0 != check_equal(1, 1));
    printf("ok\n");
}

void test_check_equal_should_return_zero_for_non_equal_int_values() {
    test_count++;

    printf("1 + 1 should not equal 2... ");
    assert(0 == check_equal(1 + 1, 1));
    printf("ok\n");
}

void test_assert_equal_for_integer_values() {
    test_count++;

    printf("assert_equal(1, 1); should run nicely... ");
    assert_equal(1, 1);
    printf("ok\n");
}

void test_assert_equal_should_quit_program_for_non_equal_int_values() {
    test_count++;

    printf("assert_equal(1, 2); should exit with status code 1... ");
    assert_equal(1, 2);
    printf("ok\n");
}

int main (int argc, char const* argv[]) {
    test_check_equal_should_return_zero_for_non_equal_int_values();
    test_check_equal_should_return_non_zero_for_equal_int_values();
    test_assert_equal_for_integer_values();
    test_assert_equal_should_quit_program_for_non_equal_int_values();

    printf("\n\nRan %d tests.\n\n", test_count);
    return 0;
}
