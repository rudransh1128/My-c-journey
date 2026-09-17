#include <stdio.h>
int main(){
    int a,b,op;
    printf("Input the first and second number of the calculation with a space in between\n");
    scanf("%d""%d",&a,&b);
    printf("1.Addition\n2.Subtraction\n3.multiplication\n4.division\n");
    printf("Input the number cooresponding to the calculation that you want to perform\n");
    scanf("%d",&op);
    switch(op){
        case 1:
        printf("%d + %d = %d",a,b,a+b);
        break;
        case 2:
        printf("%d - %d = %d",a,b,a-b);
        break;
        case 3:
        printf("%d * %d = %d",a,b,a*b);
        break;
        case 4:
        if(b!=0)
            printf("%d / %d = %d",a,b,a/b);
        else printf("Number cant be divided by 0");
        break;
        default:
        printf("Select a valid option");







    }



    return 0;
}