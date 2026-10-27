#include <iostream>
#include <string> //For std::string
using namespace std;

int main(){
    //Declare a std::string variable
    string name;

    //Ask the user to enter their name
    cout << "Enter your name: ";
    getline(cin, name);

    //Display the name
    cout << "Name: " << name << endl;

    //Use the length() method to find the length
    cout << "Length: " << name.length() << endl;

    //Display the first character
    cout << "First character: " << name[0] << endl;

    //Concatenate strings using the + operator
    string greetings = "Hello, " + name + "!";
    cout << greetings << endl;

    return 0;
}