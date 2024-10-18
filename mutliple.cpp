#include <iostream>

class Base1 {
public:
    void display1() {
        std::cout << "Base1 Class" << std::endl;
    }
};

class Base2 {
public:
    void display2() {
        std::cout << "Base2 Class" << std::endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() {
        std::cout << "Derived Class" << std::endl;
    }
};

int main() {
    Derived d;
    d.display1();
    d.display2();
    d.show();
    return 0;
}
