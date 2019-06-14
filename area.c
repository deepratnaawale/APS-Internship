/* 
*Date: 22/05/2019 
*Author: Xtreme21 (Deep)
*Purpose: Calculate areas of Circle, Triangle, Rectangle
*/

#include<stdio.h>
#define pi 3.14

int main(void){
    int choice;
    float dim1 = 0, dim2 = 0;
    
    printf("\nChoose the shape: ");
    printf("\n1. Circle\n2. Triangle\n3. Rectangle\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:        
        printf("\nEnter the radius: ");
        scanf("%f", &dim1);
        printf("\nArea of circle: %.2f", pi * dim1 * dim1);
        
        break;
    case 2:        
        printf("\nEnter the Length: ");
        scanf("%f", &dim1);
        printf("\nEnter the Height: ");
        scanf("%f", &dim2);
        printf("\nArea of triangle: %.2f", 0.5 * dim1 * dim2);
        
        break;
    case 3:        
        printf("\nEnter the Length: ");
        scanf("%f", &dim1);
        printf("\nEnter the Breadth: ");
        scanf("%f", &dim2);
        printf("\nArea of rectangle: %.2f", dim1 * dim2);
        
        break;
    default:
        printf("\nInvalid Input.");
        
    }
    return 0;
}