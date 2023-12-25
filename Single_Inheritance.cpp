#include<iostream>

using namespace std;

class single_base {
protected:
    int a, b;

public:
    void get() {
        cout << "Enter a & b: ";
        cin >> a >> b;
    }

    void output() {
        int c = a + b;
        cout << "Sum: " << c << endl;
    }
};



int main() {
    single_base obj;
    obj.get();
    obj.output();

    return 0;
}
