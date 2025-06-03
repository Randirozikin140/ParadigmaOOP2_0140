#include <iostream>
using namespace std;

class baseClass {
    public:
    virtual void perkenalan() {
        cout << "Hello saya function dari base class";
    }
};

class derivedClass : public baseClass{
    public:
    void perkenalan() {
        cout << "Hello saya function dari derived class";
    }
};
int main() {
    derivedClass a;
    a.perkenalan(); // Output: Hello saya function dari derived class

    return 0;
}