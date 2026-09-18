#include <stdio.h>
int main(){
    int a,b;
    char op;
    printf("Input the first number of the calculation :");
    scanf("%d",&a);
    printf("Input the operation from the following + - * / :");
    scanf(" %c",&op);
    printf("Input the second number of calculation :");
    scanf("%d",&b);
    if(op=='+')
        printf("The um of the two give number is : %d",a+b);
    else if(op=='-')
        printf("The subtraction of the two given number is : %d",a-b);
    else if(op=='*')
        printf("The product of the two given number :%d",a*b);
    else if(op=='/')
            {if(b!=0)
            printf("The division of the two given number is :%d",a/b);
            else
            printf("Number can't be divided by zero");}
    else 
        printf("Invalid operation chosen please choose a valid operation and try again");


    return 0;
}