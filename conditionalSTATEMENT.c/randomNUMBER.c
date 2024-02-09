#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int num,guess,nguess=0;
srand(time(0));
num=rand()%100 + 1;

do{
    printf("Guess a number between 1 to 100 : ");
    scanf("%d", &guess);

    if(guess>num){
        printf("You enter a larger value, TRY AGAIN!!\n");
    }
    else if(guess<num){
        printf("You enter a smaller value, TRY AGAIN!!\n");

    }
    else{
        printf("You GUESSED it correctly..!!\n");
        printf("You guessed it in %d attempts :", nguess);
    }
    nguess++;

}while(guess!=num);
return 0;
}