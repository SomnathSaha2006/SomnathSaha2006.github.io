#include <stdio.h>
void main(){
    int sum=0,i=1,l;
    printf("Enter last term: ");
    scanf("%d",&l);
    do{
        sum+=i;
        i++;
    }while(i<=l);
    printf("Sum of first ten natural numbers is %d",sum);

}