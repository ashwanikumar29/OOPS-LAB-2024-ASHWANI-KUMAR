#include <iostream>
using namespace std;

// Class Declaration
class Rectangle {
    private:
        int length;
        int width;

    public:
        // Default Constructor
        Rectangle() {
            length = 0;
            width = 0;
            cout << "Default Constructor called." << endl;
        }

        // Parameterized Constructor
        Rectangle(int l, int w) {
            length = l;
            width = w;
            cout << "Parameterized Constructor called." << endl;
        }

        // Copy Constructor
        Rectangle(const Rectangle &rect) {
            length = rect.length;
            width = rect.width;
            cout << "Copy Constructor called." << endl;
        }

        // Function to calculate and return area
        int area() {
            return length * width;
        }

        // Function to display the dimensions
        void displayDimensions() {
            cout << "Length: " << length << ", Width: " << width << endl;
        }
};

// Main function
int main() {
    // Default constructor is called
    Rectangle rect1;
    rect1.displayDimensions();

    // Parameterized constructor is called
    Rectangle rect2(10, 5);
    rect2.displayDimensions();
    cout << "Area of rect2: " << rect2.area() << endl;

    // Copy constructor is called
    Rectangle rect3 = rect2;
    rect3.displayDimensions();
    cout << "Area of rect3: " << rect3.area() << endl;

    return 0;
}
