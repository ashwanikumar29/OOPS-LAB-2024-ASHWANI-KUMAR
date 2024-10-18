#include <iostream>

class Base {
public:
    void display() {
        std::cout << "Base Class" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() {
        std::cout << "Derived Class" << std::endl;
    }
};

int main() {
    Derived d;
    d.display();
    d.show();
    return 0;
}
