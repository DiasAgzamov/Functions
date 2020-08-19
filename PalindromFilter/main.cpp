#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool IsPalindrom(std::string pal) {
    std::string eq;
    eq = pal;
    reverse(begin(pal), end(pal));
    if (pal == eq) {
        return true;
    } else {
        return false;
    }
}


std::vector<std::string> PalindromFilter(std::vector<std::string> words) {
    std::string x;
    std::string y;
    int minLength;
    std::cin >> minLength;
    for (std::string c : words) {
        if (IsPalindrom(c)) {
            if (minLength <= c.size()) {
                std::cout << c << std::endl;
            }
        } else {
            continue;
        }
    }

    return words;
}

int main() {
    std::vector<std::string> words = {};
    PalindromFilter(words);
    std::string x;
    std::string y;
    std::cin >> x >> y;
    words.push_back(x);
    words.push_back(y);
    return 0;
}