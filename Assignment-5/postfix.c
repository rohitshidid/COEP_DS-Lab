#include <stdio.h>
#include <stdlib.h>
#include"postfix.h"
#include <string.h>
#include <ctype.h>
#include <limits.h>


int main(){ 
    char s[100];
    printf("Enter postfix Expression: ");
    gets(s);
	int res=evaluate(s,head);
    if(count(head)>1 || res==INT_MIN){
    	printf("Entire expression wasnt evaluated");
    	printf("\n");
	}
	else if(count(head)==1){
		printf("%d",res);
		printf("\n");
		
	}
    
}	
	