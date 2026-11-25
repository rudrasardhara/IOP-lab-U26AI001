#include <stdio.h>
int main(){
    int A[10];
    int i,j,pos=0,neg=0,zero=0;
    for(i=0;i<=9;i++){
        scanf("%d",&A[i]);
    }
    for(j=0;j<=9;j++){
        if(A[j]>0)
        pos++;
        else if(A[j]<0)
        neg++;
        else
        zero++;
    }
    printf("the number of positive elements= %d",pos);
    printf("\nthe number of negative elements= %d",neg);
    printf("\nthe number of zero= %d",zero);
    return 0;
}