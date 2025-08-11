#include <stdio.h>
void main(){
    int n,c=0;
    printf("Enter no.: ");
    scanf("%d",&n);
    if(n==0||n==1){
        printf("%d is not a prime number",n);
    }if(n>1){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c+=1;
        }
    }if(c==2){
            printf("%d is a prime number",n);
        }else{
            printf("%d is not a prime number",n);
        }
    }
}