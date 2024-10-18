#include <iostream>
using namespace std;

class Box
{
private:
  double width;

public:
  Box() : width(0) {}

  // Friend function declaration
  friend void setWidth(Box &b, double w);
};

// Friend function definition
void setWidth(Box &b, double w)
{
  b.width = w;
  cout << "Private width is: " << b.width;
}

int main()
{
  Box b;
  setWidth(b, 10.5); // Accessing private member via friend function

  return 0;
}
