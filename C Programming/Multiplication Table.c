#include <stdio.h>
void main(){
    int n,m;
    printf("Enter number and multiplier: ");
    scanf("%d%d",&n,&m);
    for (int i=1;i<=m;i++){
        printf("%d multiplied with %d is %d\n",n,i,(n*i));
    }for (int i=m;i>0;i--){
        printf("%d multiplied with %d is %d\n",n,i,(n*i));
    }
}