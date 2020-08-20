#include <iostream>
#include <string>
#include <algorithm>

bool IsPalindrom(std::string pal) {
    std::string eq;
    eq = pal;
    reverse(begin(pal), end(pal));
    if (pal == eq) {
        return true;
    } 
}

int main() {
    std::string pal;
    std::cin >> pal;
    std::cout << IsPalindrom(pal) << std::endl;
    return 0;
}
