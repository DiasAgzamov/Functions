#include <iostream>

void UpdateIfGreater(int first, int &second) {
    if (first > second) {
        second = first;
    }
}

int main() {
    int a;
    int b;
    std::cin >> a >> b;
    UpdateIfGreater(a, b);
    std::cout << b << std::endl;
    return 0;
}
