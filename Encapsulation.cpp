#include<iostream>

using namespace std;

class Add {

private:
    int x, y, r;

public:
    int Addition(int x, int y) {
        r = x + y;
        return r;
    }

    void show() {
        cout << "The sum is: " << r << "\n";
    }
};

int main() {
    Add s;
    s.Addition(10, 4);
    s.show();

    return 0;
}
