#include <iostream>
using namespace std;

// Step 1: Create interface (abstract class) Playable
namespace music {
    class Playable {
    public:
        virtual void play() = 0;  // pure virtual function
        virtual ~Playable() {}    // virtual destructor
    };
}

// Step 2: Veena class inside music::string namespace
namespace music {
    namespace string_instruments {   // 'string' is reserved keyword, so renamed
        class Veena : public Playable {
        public:
            void play() override {
                cout << "Playing Veena 🎶" << endl;
            }
        };
    }
}

// Step 3: Saxophone class inside music::wind namespace
namespace music {
    namespace wind {
        class Saxophone : public Playable {
        public:
            void play() override {
                cout << "Playing Saxophone 🎷" << endl;
            }
        };
    }
}

// Step 4: Test class in live namespace
namespace live {
    class Test {
    public:
        static void run() {
            // a. Create Veena object
            music::string_instruments::Veena v;
            v.play();

            // b. Create Saxophone object
            music::wind::Saxophone s;
            s.play();

            // c. Using Playable reference (polymorphism)
            music::Playable* p;

            p = &v;
            p->play();

            p = &s;
            p->play();
        }
    };
}

// Main function
int main() {
    live::Test::run();
    return 0;
}