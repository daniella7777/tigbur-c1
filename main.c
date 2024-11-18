#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


int main(int argc, char const *argv[])
{
    /*
    Reminder!!: 
    argc = emount of arguments + 1 (for the name of the program)
    argv = an array of strings of the arguments from the command line
           the first one is the name of the program.
    */
    const int MAX_ARGS = 10; 
    int numArray[MAX_ARGS];
    int largest = INT_MIN ,average = 0;

    if(argc == 1 || argc > MAX_ARGS + 1){
        printf("This program must recieve between 1 - 5 arguments of numbers");
        return 1;
    }
    
    //Convert the arguments from strings to integers and store in numArray

    //Call a function to find the largest number in numArray

    //Call a function to find the average number of the numbers in numArray

    //Print the largest and the average
    printf("Average: %d \n" , average);
    printf("largest: %d \n", largest);
    return 0;
}
