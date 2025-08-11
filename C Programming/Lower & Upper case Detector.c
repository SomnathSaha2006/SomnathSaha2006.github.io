#include <stdio.h>
void main(){
    char c;
    printf("Enter character: ");
    scanf("%c",&c);
    printf("The value of character '%c' is %d\n",c,c);
    if (c>=97 && c<=122){
        printf("Character is in lowercase");
    }else if (c>=65 && c<=90){
        printf("Character is not in uppercase");
    }
}