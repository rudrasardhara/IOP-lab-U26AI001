#include <stdio.h>
int main(){
    char ch;
    int i;
    for(i=0;i<5;i++){
        for(ch='A';ch<='A'+i;ch++)
        printf("%c", ch);
        printf("\n");
    }
    return 0;
}