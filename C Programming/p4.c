#include <stdio.h>
void main(){
    float p,r,t;
    printf("Enter principal, rate and time(in year): ");
    scanf("%f%f%f",&p,&r,&t);
    printf("Simple Interest is %f",(p*r*t)/100);
}