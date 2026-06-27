#include <iostream>
using namespace std;

class Box {
protected:
    float length, breadth;

public:
    Box() {
        length = breadth = 0;
    }

    Box(float l, float b) {
        length = l;
        breadth = b;
    }

    void setValue(float l, float b) {
        length = l;
        breadth = b;
    }

    float area() {
        return length * breadth;
    }
};

class Box3D : public Box {
private:
    float height;

public:
    Box3D() {
        height = 0;
    }

    Box3D(float l, float b, float h) : Box(l, b) {
        height = h;
    }

    void setValue(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
    }

    float volume() {
        return length * breadth * height;
    }
};

int main() {

    Box b1(10,5);

    cout << "Area = " << b1.area() << endl;

    Box3D b2(10,5,4);

    cout << "Volume = " << b2.volume() << endl;

    return 0;
}