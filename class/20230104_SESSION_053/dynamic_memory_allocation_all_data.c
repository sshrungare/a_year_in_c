#include <stdio.h>
#include <stdlib.h>


void build_in_data_type(void);
void array_of_builtin_data_type(void);
void user_defined_data_type(void);

int main(void){

    build_in_data_type();
    array_of_builtin_data_type();
    user_defined_data_type();

    return (0); 
}

void build_in_data_type(void){
    float* fp = 0;
    fp =(float*)malloc(sizeof(float));

    if (fp == 0)
    {
        puts("Memmory allocation to float pointer failed");
        exit(EXIT_FAILURE);
    }

    printf("Enter a floating point number : \n");
    scanf("%f",fp);

    printf("Enetered Number is *fp = %.2f \n",*fp);

    free(fp);
    fp = 0 ; 

}
void array_of_builtin_data_type(void){
    int* i_array = 0;
    unsigned int size = 0;
    unsigned int i = 0

    printf("Enter size of array\n");
    scanf("%u", &size);
    
    i_array = (int*)malloc(size * sizeof(int)); 
    if (i_array == 0)
    {
        puts("Memmory allocation failed");
        exit(EXIT_FAILURE);
    }

    for (i=0;)


}


void user_defined_data_type(void){

}