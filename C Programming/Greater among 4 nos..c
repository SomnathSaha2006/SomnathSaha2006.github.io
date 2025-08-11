#include <stdio.h>
void main(){
    float num1,num2,num3,num4;
    printf("Enter 4 numbers: ");
    scanf("%f%f%f%f",&num1,&num2,&num3,&num4);
    if (num1>num2 && num1>num3 && num1>num4){
        printf("%f is greater",num1);
    }else if (num2>num1 && num2>num3 && num2>num4){
        printf("%f is greater",num2);
    }else if (num3>num1 && num3>num2 && num3>num4){
        printf("%f is greater",num3);
    }else{
        printf("%f is greater",num4);
    }
}