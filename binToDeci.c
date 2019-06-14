/* 
*Date: 22/05/2019 
*Author: Xtreme21 (Deep)
*Purpose: Convert Binary numbers to decimal.
*/

#include<stdio.h>
 int main(void){
    int  num, bin, deci = 0, pow = 1, rem;

    printf("\nEnter a binary number: ");
    scanf("%d", &num); 

    bin = num;

    while (num > 0){
        rem = num % 10;
        deci = deci + rem * pow;
        num = num / 10 ;
        pow = pow * 2;
    }

    printf("\n(%d)b = (%d)d \n", bin, deci);
    return 0;
 }