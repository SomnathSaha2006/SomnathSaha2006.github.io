#include <stdio.h>
void main(){
    float c,f;
    printf("Enter temperature in celsius and fahrenheit: ");
    scanf("%f%f",&c,&f);
    float c1=(c*(9.0/5))+32.0;
    printf("%.2f in fahrenheit is %f \n",c,c1);
    float f1=(f-32.0)*(5.0/9);
    printf("%.2f in celsius is %f \n",f,f1);

}