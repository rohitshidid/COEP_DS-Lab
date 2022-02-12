#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct animal
{
    int legs;
    char cate[20];
}animal;

int main(){
    animal dog;
    dog.legs = 2;
    strcpy(dog.cate,"Dog");
    printf("legs : %d",dog.legs);
    printf("my cat is %s ",dog.cate);


    printf("\n");
    return 0;
}
