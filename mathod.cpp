#include<iostream>
using namespace std;

class Addition {
public:
    void sum(int a, int b) {
        cout << a + b;
    }

    void sum(float a, float b, float c) {
        cout << a + b + c;
    }
};

int main() {
    Addition obj;

    obj.sum(10, 20);

    cout << endl;

    obj.sum(10.5, 20.5, 30.0);

    return 0;
}

