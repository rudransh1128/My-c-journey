#include <stdio.h>
int main(){
    int a,b,c;
    printf("input first and second number :");
    scanf("%d" "%d",&a , &b);
    c=a;
    a=b;
    b=c;
    printf("After swapping first number is:%d \n", a);
    printf("After swapping second number is:%d", b);
    return 0;
}