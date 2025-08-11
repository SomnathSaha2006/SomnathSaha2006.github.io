#include <stdio.h>
void main(){
    int n,d;
    printf("Enter the quotient and the dividend: ");
    scanf("%d%d",&n,&d);
    if (n%d==0)
    printf("%d is divisible by %d\n",n,d);
    else
    printf("%d is not divisible by %d",n,d);
}