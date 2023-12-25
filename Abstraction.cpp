#include<iostream>

using namespace std;

class Sum {
private:
    int a, b, c;

public:
    void add() {
        cout << "Enter any two numbers: ";
        cin >> a >> b;
        c = a + b;
        cout << "Sum: " << c << endl;
    }
};

int main() {
    Sum s;
    s.add();

    return 0;
}
