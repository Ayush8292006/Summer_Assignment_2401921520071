#include <iostream>
using namespace std;

// Interface using Abstract Class
class Test {
public:
    virtual int square(int x) = 0;
};

class Arithmetic : public Test {
public:
    int square(int x) override {
        return x * x;
    }
};

class ToTestInt {
public:
    void show() {
        Arithmetic obj;
        int num;

        cout << "Enter a number: ";
        cin >> num;

        cout << "Square = " << obj.square(num);
    }
};

int main() {
    ToTestInt t;
    t.show();

    return 0;
}