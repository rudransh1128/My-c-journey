#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    /*This code replaces the values stored in
     varibles without using a third variable*/
    printf("this is first after swap:%d\n",a);
    printf("this is second after swap:%d\n",b);
    return 0;
}