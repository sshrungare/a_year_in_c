#include <stdio.h>
#include <stdlib.h>


void test_1(int m);

int main(void)
{
    int n;
    n = 100;
    printf("main(): value(n) =%d , Address of n = %p \n",n,&n);
    test_1(n);
    return(0);
}

void test_1(int m)
{
    printf("main(): value(m) =%d , Address of n = %p \n",m,&m);
}