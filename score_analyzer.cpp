#include <iostream>
#include <iomanip> // For setprecision
using namespace std;

//FUNCTION: calculateAverage
//Purpose: Calculate the average of an array of scores
//Parameters: scores (the array of scores), size (number of elements)
//Returns: average (double)
double calculateAverage(int scores[], int size){
    int sum = 0;
    //loop through each score and add to sum
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    //Return the average as a double
    return (double)sum / size;
}

//FUNCTION: display AboveAverage
//Purpose: Display scores that are above the average
//Parameters: scores (array), size (number of elements), average
//Returns: void
void displayAboveAverage(int scores[], int size, double average) {
    cout << "\nScores above average (" << average << "):" << endl;
    bool found = false;

    //Loop through each score and compare the average
    for (int i = 0; i < size; i++) {
        if (scores[i] > average) {
            cout << " Score " << scores[i] << " at position " << i + 1 << endl;
            found = true;
        }
    }
    // If no scores are above average, display a message
    if (!found) {
        cout << " None" << endl;
    }
}

int main(){
    const int SIZE = 10; //Number of scores
    int scores[SIZE]; //Array to store scores

    //ASK the user to enter 10 scores
    cout << "Enter " << SIZE << "student scores:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];
    }

    //Calculate the average
    double average = calculateAverage(scores, SIZE);

    //Display the results
    cout << "\n--- Results ---" << endl;
    cout << "Average score: " << fixed << setprecision(2) << average << endl;

    //Display scores above average
    displayAboveAverage(scores,SIZE,average);

    return 0;

}
    