#include <iostream>
using namespace std;

int main() {
    float numerator, denominator, result;

    cout << "Enter the Numerator: ";
    cin >> numerator;

    cout << "Enter the denominator: ";
    cin >> denominator;

    result = numerator / denominator;
    cout << "\nThe result of division is: " << result << endl;

    return 0;
}

