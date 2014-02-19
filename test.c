#include<stdio.h>
#include "lib.h"
#include<stdlib.h>
#include<assert.h>
void check_sum()
{
assert(add(3,4) == 7);
}
int main()
{
check_sum();
return 0;
}
