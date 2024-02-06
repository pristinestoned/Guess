/*
Copyright Brian Ponnampalam 2020
Author is not held responsible for any damages by this script. 
Feel free to redistribute and modify the script.

Author: brian2004[at] hotmail[dot] com
*/
#include <stdio.h>
#include <math.h>

void green () {
   printf("\033[0;32m");
}

void red () {
   printf("\033[1;31m");
}

void reset () {
   printf("\033[0m");
}

int main() {

   int myNum;
   green();
   printf("\n\nGuess a number memorize it in your head\n\n");
   reset();
   printf("Now multiply it by 2\n\n");
   printf("Now add 10 to it\n\n");
   printf("Now divide it by 2\n\n");
   printf("Please enter your total? ");
   scanf("%d", &myNum);
   printf("\n");

   if(myNum < 6) {
       red();
       printf("You entered an invalid answer\n\n");
       reset();
       return 0;
   }
   if(myNum >= 6) {
      green();
      printf("You thought of number: %d\n\n", (myNum - 5));
      reset();
   }
}
