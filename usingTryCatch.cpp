
#include <iostream>
using namespace std;

int main() {
    int numerator, denominator, result;

    cout << "Enter the Numerator: ";
    cin >> numerator;

    cout << "Enter the denominator: ";
    cin >> denominator;

    try {
        // Check if denominator is zero
        if (denominator == 0) {
            throw denominator;
        }

        // Perform division
        result = numerator / denominator;
        cout << "\nThe result of division is: " << result << endl;
    } catch (int num) {
        // Catch and handle the exception
        cout << "You cant enter " <<num<<"in denominator" <<endl;
    }

    return 0;
}
