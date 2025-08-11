#include <stdio.h>
void main(){
    int n,factorial=1;
    printf("Enter no.: ");
    scanf("%d",&n);
    int i=n;
    if(n==0||n==1){
        factorial=1;
    }else if(n>1){
        while((i)>0){
            factorial*=i;
            i--;
        }
    }printf("Factorial of %d is %d",n,factorial);
}