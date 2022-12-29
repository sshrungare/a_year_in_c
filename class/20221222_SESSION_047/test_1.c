/*
*/


#include <stdio.h>
#include <stdlib.h>

void test_1(void);

int main(void){
    test_1();
    return(0);
}

void test_1(void)
{
    int a = 10;
    int b = 20;
    int  tmp;

    printf("a = %d , b= %d \n",a , b);
    tmp = a;
    a = b;
    b = tmp;
    printf("a = %d , b = ^%d\n", a , b);
      
}