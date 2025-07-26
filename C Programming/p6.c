#include <stdio.h>
void main(){
    float m1,m2,m3;
    printf("Enter marks in 3 subjects: ");
    scanf("%f%f%f",&m1,&m2,&m3);
    if ((m1>=33)&&(m2>=33)&&(m3>=33)){
        if ((((m1+m2+m3)/300)*100)>=40)
        printf("Passed");
        else
        printf("Failed");
    }else
    printf("Failed in min. 1 subject");
}