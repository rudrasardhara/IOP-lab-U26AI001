#include <stdio.h>
int main(){
    int i,j,sum=0;
    int A[10];
    for(i=0;i<=9;i++){
    scanf("%d",&A[i]);
    }    
    for(j=0;j<=9;j++){
        sum+=A[j];
    }
    printf("the sum is %d",sum);
    return 0;
}