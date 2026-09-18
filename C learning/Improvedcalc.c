#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    char op;
    printf("=======================================\n\n");
    printf("              CALCULATOR             \n\n");
    printf("=======================================\n");
    printf("AVAILABLE OPERATIONS IN THE CALCULATOR \n       1.|| ADDITION        ||\n       2.|| SUBRTRACTION    ||\n       3.|| MULTIPLICATION  ||\n       4.|| DIVISION        ||\n\n");
    printf("Input the first number :");
    scanf("%d",&a);
    printf("Input the second number :");
    scanf("%d",&b);
    printf("Input the operator for desired:");
    scanf(" %c",&op);
    switch(op){
        case '+':
        printf("%d + %d = %d",a,b,a+b);
        break;
        case '-':
        printf("%d - %d = %d",a,b,a-b);
        break;
        case '*':
        printf("%d * %d = %d",a,b,a*b);
        break;
        case '/':
        if(b!=0)
            printf("%d / %d = %d",a,b,a/b);
        else printf("Number cant be divided by 0");
        break;
        default:
        printf("Select a valid option");
    }
    return 0;
}