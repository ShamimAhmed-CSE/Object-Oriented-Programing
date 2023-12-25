#include<iostream>
using namespace std;

class Father {
private:
    char name[20];
    int age;

public:
    void get() {
        cout << "Enter father's name: ";
        cin >> name;
        cout << "Enter father's age: ";
        cin >> age;
    }

    void show() {
        cout << "\nFather's name is " << name;
        cout << "\nFather's age is " << age;
    }
};

class Son : public Father {
// First derived class derived from father class

char name[20];
int age;
public:
    void get() {
        Father::get();
        cout << "Enter son's name: ";
        cin >> name;
    }

    void show() {
        Father::show();
        cout << "\nSon's name is " << name;
    }
};

class Daughter : public Father {
// First derived class derived from father class
char name[20];
int age;
public:
    void get() {
        Father::get();
        cout << "Enter daughter's name: ";
        cin >> name;
    }

    void show() {
        Father::show();
        cout << "\nDaughter's name is " << name;
    }
};

int main() {
    Son s1;
    Daughter d1;

    cout << "Enter father's details:\n";
    s1.get();

    cout << "\nEnter son's details:\n";
    d1.get();

    cout << "\n\nDetails of the family:\n";
    s1.show();
    d1.show();

    return 0;
}
