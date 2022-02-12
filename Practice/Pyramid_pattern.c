#include<stdio.h>

void pattern(char chr, int size){
    
     for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
        printf("%c \t",chr);
        }
        printf("\n");
    }
}



int main(){

    int num;
    int toprint;
    char ch;
    printf("Enter the length: ");
    scanf("%d",&num);
    printf("Enter what to print: ");
    scanf("%s",&ch);
    pattern(ch,num);
    printf("\n");
    return 0;

}