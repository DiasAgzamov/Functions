#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> Reversed(const std::vector<int> &v) {
    std::vector<int> copy = v;
    reverse(begin(copy), end(copy));
    return copy;
}

int main() {
    std::vector<int> numbers = {1, 5, 3, 4, 2};
    numbers = Reversed(numbers);
    for (auto x : numbers) {
        std::cout << x << " ";
    }

    return 0;
}
