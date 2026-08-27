#include <stdio.h>
int main(){
    int a,c;
    float b;
    float final;
    printf("input the principle amount:");
    scanf("%d", &a);
    printf("input the interest rate:");
    scanf("%f", &b);
    printf("input the time in years:");
    scanf("%d", &c);
    final=a+ a*b*c;
    printf("%f" ,final);
    return 0;
}