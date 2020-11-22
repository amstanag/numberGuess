//
//  main.c
//  numberGuess
//
//  Created by Alex Stanage on 11/21/20.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int max, random, guess;
    
    //save inputted integer as max
    printf("Please enter a max number for range: ");
    scanf("%d", &max);
    
    //create a random number between 0 and max
    srand(time(NULL));
    random = (rand() % (max + 1));
    
    //scan for the first guess
    printf("Try to guess the random number!\n");
    scanf("%d", &guess);
    
    //keep scanning for guesses until the right number is found
    while(1){
        if(guess > random){
            printf("Your guess is too high!\n");
            scanf("%d", &guess);
        }else if(guess < random){
            printf("Your guess is too low\n");
            scanf("%d", &guess);
        }else if (guess == random){
            printf("Correct! Your guess was %d, and the random number was %d\n", guess, random);
            exit(1);
        }
    }

    return 0;
}
