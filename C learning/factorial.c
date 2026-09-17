#include <stdio.h>
#include <math.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("factorial of %d :%.0f",a, tgamma(a+1));

    return 0;
}