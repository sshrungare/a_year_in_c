#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    struct Date d1 = {1,1,1970};
    struct Date d2;

    int dd, mm, yy; 

    d2.day = 2;
    d2.month = 11;
    d2.year = 1997;

    dd = d1.day;
    mm = d1.month;
    yy = d1.year;

    printf("d1 : %d/%d/%d \n",dd,mm,yy); 

} 