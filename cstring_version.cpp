#include <iostream>
#include <cstring> // For strlen, strcpy
using namespace std;

int main() {
    //Declare a C-string (character array) with a maximum size
    char name[50];

    //Ask the user to enter their name
    cout << "Enter your name: ";
    cin.getline(name, 50); //Reads a full line into the C-string

    //Display the name
    cout << "Name: " << name << endl;

    // Use strlen to find the length of the C-string
    cout << "Length: " << strlen(name) << endl;

    //Display the first character
    cout << "First character: " << name[0] << endl;

    //Copy the C-string to another C-string using strcpy
    char copy[50];
    strcpy(copy, name);
    cout << "Copy: " << copy << endl;

    return 0;
}