


/*
@Author : Swapnil Shrungare
@Date : 7th Dec 2022
@Goal : To Demonstrate differnce betwen pre  and post 
*/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    int num_1 = 10;
    int num_2 = 20;
    int rs1 , rs2;
    
    printf("num_1  = %d\n",num_1);
    rs1 = ++num_1;
    printf("num_1 = %d, rs1 = %d\n",num_1,rs1);

    rs2 = num_1++;
    printf("num_1 = %d , rs1 = %d\n",num_1,rs2);

    rs1 = --num_2;
    printf("num_2 =%d , rs2 = %d \n" , num_2,rs1);

    rs1 = num_2--;
    printf("num_2 =%d , rs2 = %d \n" , num_2,rs1);


    return(0);
}