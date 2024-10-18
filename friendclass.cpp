#include <iostream>
using namespace std;

class A
{
private:
  int secret;

public:
  A() : secret(42) {}

  // Declaring class B as a friend class
  friend class B;
};

class B
{
public:
  void revealSecret(A &a)
  {
    cout << "Secret of A: " << a.secret << endl;
  }
};

int main()
{
  A a;
  B b;
  b.revealSecret(a); // Accessing private member of class A

  return 0;
}
