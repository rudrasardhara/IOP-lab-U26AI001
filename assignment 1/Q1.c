#include <stdio.h>
int main(){
    float P,R,T;
    printf("enter principal amount\n");
    scanf("%f",&P);
    printf("enter rate\n");
    scanf("%f",&R);
    printf("enter time\n");
    scanf("%f",&T);
    printf("simple interest is %f",(P*R*T)/100);
    return 0;

}
