#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a,b;
    srand(time(NULL));
    b=rand() %100 + 1;
    printf("Guess a random number between 1-100 : ");
    scanf("%d",&a);
    if(a==b)
        printf("Your guess was correct");
    else 
    printf("Incorrect guess , The correct number was %d",b);

    return 0;
}