#include <iostream>
#include <vector>
#include <algorithm>

void Reverse(std::vector<int>& numbers){
    reverse(begin(numbers), end(numbers));
}


int main() {
    std::vector<int> nums = {1, 2, 4, 3, 3, 4, 5};
    Reverse(nums);
    for(auto i : nums){
        std::cout << i << " ";
    }
    return 0;
}
