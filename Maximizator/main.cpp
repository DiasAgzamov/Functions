#include <iostream>
//#include <string>

void UpdateIfGreater(int first, int &second) {
    auto tmp = first;
    if (first > second) {
        second = tmp;
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
