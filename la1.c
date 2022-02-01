#include <stdio.h>
#include <stdlib.h>

// Author: Caden Corontzos
// CSCI 389 - Spring 2022
// The script takes as input the size of the length of list and a seed for random number generation
// both inputs are limited to 8 bits (unsigned)

int main(int argc, char *argv[]){
    if(argc!=3){
        printf("Please supply arguments. I.e \n ./la1.c <length of list> <seed>\n");
    } else{

        // produce n random numbers and sum them
        srand((uint8_t) atoi(argv[2]));
        uint8_t sampleSize = atoi(argv[1]);
        double total = 0;
        for(int i = 0; i< sampleSize; i++){
            total+=rand();
        }

        // print the average of the numbers
        printf("The average of the %hhu random numbers", sampleSize);
        double average = total/sampleSize;
        printf(" is %f\n",average);
    }
}
