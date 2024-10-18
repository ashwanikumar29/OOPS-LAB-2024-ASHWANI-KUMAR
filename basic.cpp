#include <iostream>
using namespace std;

// Class Declaration
class Person {
    // Private members
    private:
        string name;
        int age;

    // Public members
    public:
        // Member function to set data
        void setData(string personName, int personAge) {
            name = personName;
            age = personAge;
        }

        // Member function to display data
        void displayData() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

// Main function
int main() {
    // Create an object of Person class
    Person person1;

    // Accessing class members using object
    person1.setData("John", 25);
    person1.displayData();

    return 0;
}
