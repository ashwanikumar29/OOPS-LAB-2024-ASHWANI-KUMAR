#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;

    Student(std::string n, int a) : name(n), age(a) {}
};

int main() {
    Student student("Alice", 20);
    Student* ptr = &student;

    std::cout << "Student Name: " << ptr->name << std::endl;
    std::cout << "Student Age: " << ptr->age << std::endl;

    return 0;
}
