#include <check.h>
#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
#include <assert.h>
START_TEST(sumtest)
{
ck_assert(add(3,4) == 7);
ck_assert(add(-1,4) == 3);
//ck_abort_msg("test failed\n");
}
END_TEST

START_TEST(subtest)
{
ck_assert(sub(3,4) == -1);
ck_assert(sub(-1,4) == -5);
//ck_abort_msg("test failed\n");
}
END_TEST

int main()
{
    Suite *s1 = suite_create("Sum");
    TCase *tc1_1 = tcase_create("Core");
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, sumtest);
    tcase_add_test(tc1_1, subtest);

    SRunner *sr = srunner_create(s1);
    
    srunner_run_all(sr, CK_NORMAL);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
