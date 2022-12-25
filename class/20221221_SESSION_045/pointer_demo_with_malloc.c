/*
@Author : Swapnil Shrungare
@Date : 25 Dec 2022
@Goal : Demo for pointer 
*/

#include <stdio.h>
#include <stdlib.h>
/// @brief  declare parameters/////////////////////
char c1;
unsigned char uc1;

short s_num;
unsigned short us_num;

int i_num;
unsigned int u_num;

long l_num;
unsigned long ul_num;

long long ll_num;
unsigned long long ull_num;

float f;
double d;
long double lng_d;

////////////////////////////////////////////////////
char* p_char;
unsigned char* p_uchar;

short* p_short;
unsigned short* p_ushort;

int* p_int;
unsigned int* p_uint;

long* p_long;
unsigned long* p_ulng;

long long* p_llng;
unsigned long long* p_ullng;

float* p_float; /// windows prefer * star character at type 
double * p_dbl; /// no one uses
long double *p_lng_dbl; /// Linux  

int main(main)
{
    p_char = &c1;
    p_uchar = &uc1;

    p_short = &s_num;
    p_ushort = &us_num;

    p_int =&i_num;
    p_uint = &u_num;

    p_long = &l_num; 
    p_ulng = &ul_num; 

    p_llng = &ll_num; 
    p_ullng = &ull_num; 

    p_float = &f; 
    p_dbl = &d; 
    p_lng_dbl = &lng_d; 

    *p_int = 500;
    int m;
    m = *p_int;

    return(0);
}