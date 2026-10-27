#include <iostream>
#include <iomanip> // For setprecision
#include <vector>
using namespace std;

//FUNCTION: calculateAverage
//Purpose: Calculate the average of a vector of scores
//Parameters: scores (the vector of scores)
//Returns: average (double)
double calculateAverage(const vector<int>& scores){
    long long sum = 0;
    //loop through each score and add to sum
    for (int score : scores) {
        sum += score;
    }
    //Return the average as a double
    return static_cast<double>(sum) / scores.size();
}

//FUNCTION: display AboveAverage
//Purpose: Display scores that are above the average
//Parameters: scores (vector), average
//Returns: void
void displayAboveAverage(const vector<int>& scores, double average) {
    cout << "\nScores above average (" << average << "):" << endl;
    bool found = false;

    //Loop through each score and compare the average
    for (size_t i = 0; i < scores.size(); i++) {
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
    int size;
    cout << "How many scores do you want to enter? ";
    if (!(cin >> size) || size <= 0) {
        cerr << "Please enter a positive number of scores." << endl;
        return 1;
    }
    vector<int> scores(size);

    //Ask the user to enter the requested number of scores
    cout << "Enter " << size << " student scores:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Score " << i + 1 << ": ";
        if (!(cin >> scores[i])) {
            cerr << "Invalid score input." << endl;
            return 1;
        }
    }

    //Calculate the average
    double average = calculateAverage(scores);

    //Display the results
    cout << "\n--- Results ---" << endl;
    cout << "Average score: " << fixed << setprecision(2) << average << endl;

    //Display scores above average
    
    displayAboveAverage(scores, average);

    return 0;

}
    