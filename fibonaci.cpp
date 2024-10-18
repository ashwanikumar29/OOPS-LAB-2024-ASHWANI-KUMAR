#include <iostream>

class Fibonacci {
private:
    int n;

public:
    Fibonacci(int num) : n(num) {
        generateFibonacci();
    }

    void generateFibonacci() {
        int a = 0, b = 1, next;
        std::cout << "Fibonacci Series up to " << n << " terms: " << std::endl;
        for (int i = 1; i <= n; i++) {
            std::cout << a << " ";
            next = a + b;
            a = b;
            b = next;
        }
        std::cout << std::endl;
    }
};

int main() {
    int n;
    std::cout << "Enter number of terms: ";
    std::cin >> n;
    Fibonacci f(n);
    return 0;
}
