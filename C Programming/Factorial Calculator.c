#include <stdio.h>
void main(){
    int n,factorial=1;
    printf("Enter no.: ");
    scanf("%d",&n);
    if(n==0||n==1){
        factorial=1;
    }else if(n>1){
        for(int i=n;i>0;i--){
            factorial*=i;
        }
    }printf("Factorial of %d is %d",n,factorial);
}