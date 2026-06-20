#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


class Compartment {
public:
    virtual string notice() = 0; // pure virtual function
};


class FirstClass : public Compartment {
public:
    string notice() {
        return "First Class Compartment: Comfortable seating, premium service.";
    }
};

class Ladies : public Compartment {
public:
    string notice() {
        return "Ladies Compartment: Reserved for female passengers.";
    }
};

class General : public Compartment {
public:
    string notice() {
        return "General Compartment: Open for all passengers.";
    }
};

class Luggage : public Compartment {
public:
    string notice() {
        return "Luggage Compartment: Only goods are allowed.";
    }
};

int main() {
    Compartment* arr[10]; 

    srand(time(0)); 

    for (int i = 0; i < 10; i++) {
        int type = rand() % 4 + 1; 

        switch (type) {
            case 1:
                arr[i] = new FirstClass();
                break;
            case 2:
                arr[i] = new Ladies();
                break;
            case 3:
                arr[i] = new General();
                break;
            case 4:
                arr[i] = new Luggage();
                break;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << arr[i]->notice() << endl;
    }

    for (int i = 0; i < 10; i++) {
        delete arr[i];
    }

    return 0;
}