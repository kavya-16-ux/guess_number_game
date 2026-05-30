#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(0));
int randomNumber=(rand()%100)+1;
int no_of_guesses=0;
int guessed_number;
do{
    printf("Guess the no");
    scanf("%d",&guessed_number);
    if(guessed_number>randomNumber){
        printf("Lower number\n");
    }
    else if(guessed_number<randomNumber){
        printf("Higher number\n")
    }
    else{
        printf("guess crt\n");
    }
    no_of_guesses++;

}while(guessed_number!=randomNumber);
printf("Random number:%d\n",randomNumber)

return 0;
}