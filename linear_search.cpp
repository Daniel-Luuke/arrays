// Include input/output library
#include <iostream>
using namespace std;

//FUNCTION: linearSearch
//Purpose: Search for a target value in an array
//Parameters: arr (the array), size(number of elements), target(value to find)
//Returns: index of the target if found, -1 if not found
int linearSearch(int arr[], int size, int target) {
    // Loop through each element in the array
    for (int i=0; i < size; i++) {
        // Compare the current element with the target
        if (arr[i] == target) {
            // If found, return the index
            return i;
        }
    }
    // If not found, return -1
    return -1;
}

int main() {
int numbers[8] = {15, 42, 7, 89, 23, 56, 11, 74};

//Store the size of the array in a variable
// sizeof(numbers)/sizeof(numbers[0]) gives the number of elements
int size = sizeof(numbers) / sizeof(numbers[0]);

//Declare a variable to store the user's target value
int target;

//Display the array contants so the user knows what is inside
cout << "Array contents: ";
for (int i = 0; i < size; i++){
    cout << numbers[i] << " ";
}
cout << endl;

//ask the user to enter a number to search for
cout << "Enter a number to search: ";
cin >> target;

//Call the linearSearch function and store the result
int position = linearSearch(numbers, size, target);

//Check if the element was found (position != -1 means found)
if (position != -1){
    cout << "Element found at index: " << position << endl;
} else {
    cout << "Element not found in the array." << endl;
}
return 0;
}