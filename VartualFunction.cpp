#include<iostream>

using namespace std;

class A {
public:
    void show() {
        cout << "Hello derive class" << endl;
    }
};

class B : public A {
public:
    void show(){
        cout << "Hello base class" << endl;
    }
};

int main() {
    A obj1;
    B obj2;

    obj1.show(); // Calls show() from class A
    obj2.show(); // Calls overridden show() from class B

    return 0;
}
