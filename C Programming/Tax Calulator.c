#include <stdio.h>
void main(){
    float income,tax=0;
    printf("Enter your annual income: ");
    scanf("%f",&income);
    if (income<=250000){
        tax=0;
    }else if(income<=500000){
        tax =0.05*(income-250000);
    }else if(income<=1000000){
        tax=(0.05*250000)+(0.2*(income-500000));
    }else{
        tax=(0.05*250000)+(0.2*500000)+(0.3*(income-1000000));
    }
    printf("The total tax you need to pay is %.2f",tax);
}