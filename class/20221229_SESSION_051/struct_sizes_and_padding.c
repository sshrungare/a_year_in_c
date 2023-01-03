#include <stdio.h>
#include <stdlib.h>


struct A
{
    int a ;
    char b;
    float c;
    char d;
};

struct B 
{
    int a ;
    float b ;
    char c, d; 
};

int main(void)
{
    printf("size of struct A = %llu\n", sizeof(struct A));
    printf("size of struct B = %llu\n", sizeof(struct B));
}

