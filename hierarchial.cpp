#include <iostream>

class Base {
public:
    void display() {
        std::cout << "Base Class" << std::endl;
    }
};

class Derived1 : public Base {
public:
    void show() {
        std::cout << "Derived1 Class" << std::endl;
    }
};

class Derived2 : public Base {
public:
    void print() {
        std::cout << "Derived2 Class" << std::endl;
    }
};

int main() {
    Derived1 d1;
    d1.display();
    d1.show();

    Derived2 d2;
    d2.display();
    d2.print();

    return 0;
}
