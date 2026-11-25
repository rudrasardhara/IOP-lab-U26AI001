#include <stdio.h>
int main(){
    int i,j;
    char ch='A';
    for(i=1;i<6;i++){
        for(j=0;j<i;j++){
            printf("%c",ch);
        }
        printf("\n");
        ch=ch+1;

    }
    return 0;
}