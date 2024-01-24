#include <stdio.h>
#include <stdlib.h>

    //Objective: Write a program to initialize an array of integers and find the sum and average of the elements.
int main(){
    //initialize array of numbers
    int numbers[] = {1,2,3,4,5};
    //init a sum
    int sum = 0;
    //loop through each number of it
    int i;
    for(i = 0; i <= sizeof(numbers)/sizeof(numbers[0]); i++){
        sum+=numbers[i];
    }
    //add the number to the sum 
    double average = sum / ((double) sizeof(numbers)/sizeof(numbers[0]));
    //initialize 'double average' to be sum divided by the numbers length (double)
    
    //print out 'sum:' and print out 'average:' (but sum and avg inside the printfs)
    printf("Sum is: %i\n", sum);
    printf("Avg is: %1f\n", average);
}