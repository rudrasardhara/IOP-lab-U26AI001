#include <stdio.h>
int main(){

    int A[10], i, j, count, count_odd = 0;
    printf("Enter the elements of the array:\n");
    for(i=0;i<10;i++){
        scanf("%d", &A[i]);
    }
    for(i=0;i<10;i++){
        if(A[i]%2!=0){
            count_odd++;
        }
    }
    printf("The number of odd elements= %d", count_odd);
    printf("\nFrequency of every element is: \n");
    for(i=0;i<10;i++){
        count=0;
        for(j=0;j<10;j++){
            if(A[i]==A[j]){
                count++;
            }
        }
        printf("%d occurs %d time(s)\n", A[i], count);
    }
return 0;
}