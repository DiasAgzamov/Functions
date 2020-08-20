#include <iostream>
#include <vector>

void Reverse(std::vector<int>& numbers){
    std::vector<int> srebmun;
    for(int i = numbers.size(); i >= 0; --i){
        srebmun.push_back(numbers [i]);
    }
    numbers = srebmun;
}

int main() {
    std::vector<int> nums = {1, 2, 4, 3, 3, 4, 5};
    Reverse(nums);
    for(auto i : nums){
        std::cout << i << " ";
    }
    return 0;
}
