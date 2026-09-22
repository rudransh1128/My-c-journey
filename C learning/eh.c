#include <stdio.h>
#include <stdlib.h>
//This library helps us use rand
#include <time.h>
//this library helps us use time(null) to link seed generation to current time
int main(){
    int a,b;
    srand(time(NULL));
/* Previous line of code makes sure the random number generated is different
 by using a seed linked to the current time.*/
     b=rand() %100 + 1;
    printf("Guess a random number between 1-100 : ");
    scanf("%d",&a);
    if(a==b)
        printf("Your guess was correct");
    else 
    printf("Incorrect guess , The correct number was %d",b);

    return 0;
}    