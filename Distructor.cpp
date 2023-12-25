#include<iostream>


using namespace std;

class Sum {
private:
    int a, b, c;

public:
    // Constructor
    Sum() {
        a = 10;
        b = 20;
        c = a + b;
        cout << "Sum: " << c << endl;
    }

    // Destructor
    ~Sum() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    cout << "call main" << endl;

    // Create an object of the Sum class
    Sum s;

    cout << "call destructor" << endl;

    return 0;
}

