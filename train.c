#include<stdio.h>
#include<stdlib.h>

char userName[30], pwd[15], temp1[15], temp2[15], contactNo[10], count;

void main(){
    void reg(void);
    void bookTicket(void);
}

void reg(void){
    //Function for user registeration for account.
    
    system("clear");
    printf("\nPlease Enter the following details.\n");
    printf("\nPress CTRL + D to terminate the registeration OR if you are a registered user.");

    printf("\nEnter your name: ");
    gets(userName);

    do{
        count = 0;
        if(count > 0)
            printf("\n\nPasswords mismatch OR are too long (max length 15).\n\n");
        printf("\nEnter a password: ");
        gets(temp1);
        printf("\nRe-enter your password: ");
        gets(pwd);
        count++;

    }while(strcmp(pwd, temp1)!= 0);

    do{
        count = 0;
        if(count > 0)
            printf("\n\nPlease enter a 10 digit contact number.\n\n");
        printf("\nEnter your contact number [10 digit]: ");
        gets(contactNo);
        count++;
    }while(strlen(contactNo) != 10);

}

void bookTicket(void){
    system("clear");
    do{
        count = 0;
        if(count > 0)
            printf("\n\nUser name or password is incorrect!\n\n");
        printf("\nEnter your user name: ");
        gets(temp1);
        printf("\nEnter your password: ");
        gets(temp2);
    }while(temp1 != userName && temp2 != pwd);

    printf("Enter ");

}