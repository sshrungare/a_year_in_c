/*
@Author : Swapnil Shrungare
@Goal : To Demonstrate INC DEC operator
@Date : 6th Dec 2022 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 30;
    printf("Original Num : %d \n", num);
    num = num + 1;
    printf("Post INC  Num : %d \n", num);
    num = num - 1;
    printf("Post DEC  Num : %d \n", num);

    ++num; /*Pre INC*/
    printf("PRE PRE  Num : %d \n", num);

    num++;
    printf("Post   Num : %d \n", num);

    --num; /*Pre INC*/
    printf("PRE PRE  Num : %d \n", num);

    num--;
    printf("Post   Num : %d \n", num);


    return(0);
}