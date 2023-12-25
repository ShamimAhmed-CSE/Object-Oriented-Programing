#include <iostream>
#include <string>

// Using namespace std to avoid std:: prefix
using namespace std;

// Class Declaration
class person
{
    // Access Specifier
public:
    // Variable Declaration
    string name;
    int number;
};

// Main Function
int main()
{
    // Declare an object of the person class
    person obj;

    // Get Input Values For Object Variables
    cout << "Enter the Name: ";
    cin >> obj.name;

    cout << "Enter the Number: ";
    cin >> obj.number;

    // Show the Output
    cout << obj.name << ": " << obj.number << endl;

    return 0;
}
