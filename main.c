/**
 * 
 * Project structure is going to look something like this.
 * Make sure you have your code defragmented into smaller bits for easier integration and testing. 
 * 
 * 
 **/

#include <stdio.h>
#include <stdlib.h>
#include "auth/auth.h"
#include "Records/record.h"
#include <time.h>


int main(){
    if(isUserAvailable() == 0) signup();
    else login();
    
    int ch = 0;
    do{
        system ("cls");
        gotoxy(8,44);
        printf ("*****  Personal Diary Menu  *****");
        gotoxy(1,44);
        printf("1. Add new record");
        gotoxy(1,44);
        printf("2. View existing record");
        gotoxy(1,44);
        printf("3. change password");
        gotoxy(1,44);
        printf("4. Logout\n");
        gotoxy(0,44);
        printf ("*********************************");
        gotoxy(1,44);
        printf ("What's your choice? ");
        scanf ("%d", &ch);
        
        switch (ch)
        {
            case 1:
                addrecord();
                break;
            case 2:
                viewrecord();
                break;
            case 3:
                changepw();
                break;
            case 4:
                system ("cls");
                printf ("Logout Successful !");
                exit(0);
            default: printf ("\nWrong choice. Please try again !\n");                   
        }
    }
    while (ch != 3);
}