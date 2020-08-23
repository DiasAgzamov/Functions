#include <iostream>
#include <string>
#include <algorithm>

bool IsPalindrom(std::string pal) {
    for (int i = 0; i < pal.length() / 2; ++i) {
        if (pal[i] != pal[pal.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string pal;
    std::cin >> pal;
    std::cout << IsPalindrom(pal) << std::endl;
    return 0;
}
