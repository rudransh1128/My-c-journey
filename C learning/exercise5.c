#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("enter the second number :");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    /*This code replaces the values stored in
     varibles without using a third variable*/
    printf("this is first after swap:%d\n",a);
    printf("this is second after swap:%d\n",b);
    /*this also changes the values of variable in 2 variable
    without using a third variable which negates the use of
    the extra memory which is helpul to us*/
    return 0;
}