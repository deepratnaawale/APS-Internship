/* 
*Date: 22/05/2019 
*Author: Xtreme21 (Deep)
*Purpose: Check wether entered day is weekend or weekday.
*/

#include<stdio.h>
#include<string.h>

int main(void){
    char ip[10];
    
    printf("Enter the Day: ");
    strlwr(gets(ip));
    
    if(ip == "saturday" ||ip == "sat" || ip == "sunday" || ip == "sun")
        printf("\nWeekend");
    else
        printf("\nWeekday");
    return 0;
}