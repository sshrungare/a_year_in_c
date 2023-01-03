#include <stdio.h>
#include <stdlib.h>


struct B
{
    double x ;
    double y; 
};

struct A
{
    int num;
    float f_arr[5];
    struct B inB; 
};


int main(void)
{
    struct A inA;
    
    int i; 

    inA.num =100;

    for (i=0; i<5;++i)
    {
         inA.f_arr[i] = (i *10 / 3.00);

    }
    inA.inB.x = 5.555;
    inA.inB.y = 456.778;  

    printf("inA.num = %d \n",inA.num );
    for (i=0;i<5;++i)
    {
        printf("inA.f_arr[%d] : %f \n", i, inA.f_arr[i]);
    }

    printf("inA.inB.x= %lf ,inA.inB.y = %lf \n", inA.inB.x, inA.inB.y);

    return(0);
}
