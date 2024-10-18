#include <iostream>

class Base1 {
public:
    Base1() {
        std::cout << "Base1 Constructor" << std::endl;
    }
    ~Base1() {
        std::cout << "Base1 Destructor" << std::endl;
    }
};

class Base2 {
public:
    Base2() {
        std::cout << "Base2 Constructor" << std::endl;
    }
    ~Base2() {
        std::cout << "Base2 Destructor" << std::endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    Derived() {
        std::cout << "Derived Constructor" << std::endl;
    }
    ~Derived() {
        std::cout << "Derived Destructor" << std::endl;
    }
};

int main() {
    Derived d;
    return 0;
}
