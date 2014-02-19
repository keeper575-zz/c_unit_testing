#include<stdio.h>
#include "lib.h"
#include <check.h>
START_TEST(test_add)
{
ck_assert(add(3,4) == 7);
}
END_TEST
int main()
{
//int res = add(3,4);
//printf("res: %d",res);
//ck_assert(add(3,4) == 7);
test_add ;
return 0;
}
