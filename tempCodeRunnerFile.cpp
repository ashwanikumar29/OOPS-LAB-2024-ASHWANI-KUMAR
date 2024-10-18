#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base Class" << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived Class" << std::endl;
    }
};

int main() {
    Base *b;
    Derived d;
    b = &d;

    b->show(); // Calls Derived class's show method

    return 0;
}
