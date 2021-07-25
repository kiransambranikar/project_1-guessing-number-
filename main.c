#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    int nguess=1;
    int guess;
    srand(time(0));
    number=rand()%100+1;
    // printf("the number is %d\n",number);
    // keep running the loop untill the number is guseed 
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if (guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempt\n",nguess);
        }
        nguess++;
    }while(guess!=number);
    return 0;
}