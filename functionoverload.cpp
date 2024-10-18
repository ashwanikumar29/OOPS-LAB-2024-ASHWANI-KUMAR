#include <iostream>
using namespace std;

class Print
{
public:
  // Function to print integer
  void display(int i)
  {
    cout << "Integer: " << i << endl;
  }

  // Function to print double
  void display(double d)
  {
    cout << "Double: " << d << endl;
  }

  // Function to print string
  void display(string str)
  {
    cout << "String: " << str << endl;
  }
};

int main()
{
  Print p;
  p.display(5);        // Calls display(int)
  p.display(5.99);     // Calls display(double)
  p.display("Hello!"); // Calls display(string)

  return 0;
}
