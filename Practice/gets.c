#include<stdio.h>
int main(){
    char name[10];
    char ch;
    char *chp;
    printf("Enter you name: ");
    gets(name);
    puts(name);
    printf("\n Enter your surname: ");
    scanf("%s",name);
    printf("Your Surname is : %s",name);
   

    printf("\n Enter your Inital: ");
    scanf("%s",&ch);
    printf("\nYour inital is : %c",ch);
    
    printf("\n Value for char ptr : ");
    scanf("%s",chp);
    printf("\n%c",*chp);
    
    printf("\n");


    return 0;
}