#include <iostream>

using namespace std;

// Forward declaration of class A
class A{

public:
    void display()
    {
        cout << "Base class content." << endl;
    }
};
// Class B, derived from A
class B : public A
{

};



// Class C, derived from B
class C : public B
{

};

int main()
{
    C obj;
    obj.display();

    return 0;
}

