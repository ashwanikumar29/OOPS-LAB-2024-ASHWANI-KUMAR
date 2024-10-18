#include <iostream>

class Base {
public:
    void display() {
        std::cout << "Base Class" << std::endl;
    }
};

class Intermediate : public Base {
public:
    void show() {
        std::cout << "Intermediate Class" << std::endl;
    }
};

class Derived : public Intermediate {
public:
    void print() {
        std::cout << "Derived Class" << std::endl;
    }
};

int main() {
    Derived d;
    d.display();
    d.show();
    d.print();
    return 0;
}
