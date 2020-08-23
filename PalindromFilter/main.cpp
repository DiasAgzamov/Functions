#include <iostream>
#include <vector>
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


std::vector<std::string> PalindromFilter(std::vector<std::string> words, int minLength) {
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
    int n;
    std::cin >> n;
    std::vector<std::string> words;
    for (int i = 0; i < n; ++i) {
        std::string s;
        std::cin >> s;
        words.push_back(s);
    }
    int ml;
    std::cin >> ml;
    PalindromFilter(words, ml);

    return 0;
}
