//Include input/output library for scanf and printf
#include <stdio.h>

//Function: linearSearch
//Purpose: Search for a target value in an array
//Parameters: arr (arry), size (size of element), target (value to find)
//Returns: index the target if found, -1 if not found
int linearSearch(int arr[], int size, int target) {
    
    //Loop through each element in the array
    for (int i = 0; i < size; i++) {
        //Compare the current element with the target
        if (arr[i] == target) {
            // if a match is found, return the index immediately
            return i;
        }
    }
    // if the loop finishes without finding the target, return -1
    return -1;

}

int main() {
    //Declare an array of 8 integers
    int numbers[8] = {15, 42, 7, 89, 23, 56, 11, 74};

    //Calculate the size of the array
    //sizeof(numbers) gives the total bytes, sizeof(numbers[0]) gives bytes of one element
    int size = sizeof(numbers) / sizeof(numbers[0]);

    //declare a variable to store the user's target value
    int target;

    //Dispaly the contents of the array
    printf("Array contents: ");
    for (int i = 0; i < size; i++) {
        printf("%d", numbers[i]);
    }
    printf("\n");

    //ask user for input
    printf("Enter a number to search: ");
    //scanf requires the address of operators (&) for integers
    scanf("%d", &target);

    //call the linearSearch functiopn and store the result
    int position = linearSearch(numbers, size, target);

    //Check if the element was found (position ! = -1 means found)
    if (position != -1){
        printf("Element found at index: %d\n", position);
    } else {
        printf("Element not found in array.\n");
    }

    return 0;
}