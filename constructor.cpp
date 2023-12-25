#include<iostream>
using namespace std;

class Sum {
private:
    int a, b, c;

public:
    Sum() {
        a = 10;
        b = 20;
        c = a + b;
        cout << "Sum: " << c << endl;
    }
};

int main() {
    Sum s;
    return 0;
}
