#include<iostream>
using namespace std;

int main(){
    //Declare a 2D array with 3 rows and 4 columns
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    //Display the array in row-major order (row by row)
    cout << "Column-major traversal:" << endl;
    for (int col = 0; col < 4; col++){
        for (int row = 0; row < 3; row++){ 
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    //Display memory addresses to show row-major layout
    cout << "\nMemory addresses (each int takes 4 bytes):" << endl;
    for (int row = 0; row < 3; row++){
        for (int col = 0; col < 4; col++){
            cout << "matrix[" << row << "][" << col << "] = "
            << matrix[row][col]
            <<" at address " << &matrix[row][col] << endl;
        }
    }

    //Explain the row-major order
    cout << "\nObservation: Addresses increase row by row." << endl;
    cout << "Row 0 is stored completely, then row 1, then row 2." << endl;
    cout << "This is called ROW-MAJOR ORDER." << endl;

    return 0;
}