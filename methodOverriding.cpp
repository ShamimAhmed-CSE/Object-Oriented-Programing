#include<iostream>


using namespace std;

class Base {
public:
    void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base b; // Base class object
    Derived d; // Derived class object

    b.show(); // Early Binding Occurs
    d.show(); // Late Binding Occurs

    return 0;
}

