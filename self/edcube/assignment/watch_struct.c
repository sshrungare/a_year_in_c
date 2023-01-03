#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MANUFACTURING_COMPANY_NAME 12 
#define BATTERY_SIZE 2 

struct Time{
    int hour;
    int minute;
    int seconds;
};

struct Clock{
    char brand_name[MANUFACTURING_COMPANY_NAME];
    char battery_size[BATTERY_SIZE];
    struct Time time_now; 
};

int main(void){
    struct Clock my_clock; 
    unsigned long long name_length; 

    name_length = strlen("Titan"); 
    strncpy(my_clock.brand_name, "Titan", name_length); 
    strncpy(my_clock.battery_size, "AA", strlen("AA")); 

    my_clock.time_now.hour = 15;
    my_clock.time_now.minute = 10;
    my_clock.time_now.seconds = 22;

    printf("I have a clock of %s which takes battery of size %s and currently it is showing time of %d:%d:%d \n" , my_clock.brand_name , my_clock.battery_size , my_clock.time_now.hour ,
    my_clock.time_now.minute,my_clock.time_now.seconds);

    return(0);

}

