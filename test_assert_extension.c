#include <stdio.h>
#include <assert.h>

void test_check_equal_for_integer_values() {
    printf("1 should equal 1... ");
    assert(0 != check_equal(1, 1));
    printf("ok\n");

    printf("1 + 1 should not equal 2... ");
    assert(0 == check_equal(1 + 1, 1));
    printf("ok\n");
}

void test_assert_equal_for_integer_values() {
    printf("assert_equal(1, 1); should run nicely...");
    assert_equal(1, 1);
    printf("ok\n");
}

int main (int argc, char const* argv[]) {
    test_check_equal_for_integer_values();
    test_assert_equal_for_integer_values();
    return 0;
}
