#include <stdio.h>

int main(){
    int num1;
    char op;
    int num2;
    printf("enter the first number of the calculation :\n");
    scanf("%d" , &num1);
    printf("select the operator + - / * : \n");
    scanf(" %c" , &op);
    printf("input the second number of the calculation :\n \a");
    scanf("%d" , &num2);
    if(op =='+')
        printf("the sum of 2 number is %d" , num1+num2);
    else 
    if(op=='-')
        printf("the subtraction of 2 numbers is %d" , num1-num2);
    else 
    if(op=='*')
        printf("the multiplication of the numbers is %d" , num1*num2);
    else 
    if(op =='/')
        if(num2!=0)
            printf("the division of the given is %d" , num1/num2);
        else 
            printf("number can not be divided by 0");
        return 0;
}