#include <iostream>
using namespace std;


class LibraryUser {
public:
    virtual void registerAccount() = 0;
    virtual void requestBook() = 0;
};

// KidUsers class
class KidUsers : public LibraryUser {
private:
    int age;
    string bookType;

public:
    void setAge(int a) {
        age = a;
    }

    void setBookType(string bt) {
        bookType = bt;
    }

    void registerAccount() {
        if (age < 12) {
            cout << "You have successfully registered under a Kids Account" << endl;
        } else {
            cout << "Sorry, Age must be less than 12 to register as a kid" << endl;
        }
    }

    void requestBook() {
        if (bookType == "Kids") {
            cout << "Book Issued successfully, please return the book within 10 days" << endl;
        } else {
            cout << "Oops, you are allowed to take only kids books" << endl;
        }
    }
};

// AdultUser class
class AdultUser : public LibraryUser {
private:
    int age;
    string bookType;

public:
    void setAge(int a) {
        age = a;
    }

    void setBookType(string bt) {
        bookType = bt;
    }

    void registerAccount() {
        if (age > 12) {
            cout << "You have successfully registered under an Adult Account" << endl;
        } else {
            cout << "Sorry, Age must be greater than 12 to register as an adult" << endl;
        }
    }

    void requestBook() {
        if (bookType == "Fiction") {
            cout << "Book Issed successfully, please return the book within 7 days" << endl;
        } else {
            cout << "Oops, you are allowed to take only adult Fiction books" << endl;
        }
    }
};

int main() {
    KidUsers kid;

    kid.setAge(10);
    kid.registerAccount();
    kid.setBookType("Kids");
    kid.requestBook();

    cout << endl;

    AdultUser adult;

    adult.setAge(23);
    adult.registerAccount();
    adult.setBookType("Fiction");
    adult.requestBook();

    return 0;
}