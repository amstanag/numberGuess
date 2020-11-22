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
    srand(time(0));
    random = (rand() % (max + 1));
    
//    printf("%d\n", random);
    
//    printf("Hello, World!\n");
    return 0;
}
