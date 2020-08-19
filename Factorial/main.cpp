#include <iostream>

int Factorial(int n) {
    long x = 1;
    for (int i = 1; i <= n; ++i) {
        if (n > 0) {
            x *= i;
        } else if (n <= 0) {
            x = 1;
        }
    }
    return x;
}

int main() {
    int a;
    std::cin >> a;
    std::cout << Factorial(a) << std::endl;
    return 0;
}
