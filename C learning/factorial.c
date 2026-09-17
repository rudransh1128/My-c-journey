#include <stdio.h>
#include <math.h>
int main(){
    int a;
    printf("Input the number of which the factorial is required: ");
    scanf("%d",&a);
    printf("factorial of %d :%.0f",a, tgamma(a+1));
 //this program is used to find factorial of any number that is input by the user
    return 0;
}