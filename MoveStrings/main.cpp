#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> MoveStrings(vector<string>& a, vector<string>& b) {
    for (auto x : a) {
        b.push_back(x);
    }
    a.clear();
    return b;
}

int main() {
    vector<string> source = {"a", "b", "c"};
    vector<string> destination = {"z"};
    MoveStrings(source, destination);
    for (auto x : destination){
        std::cout << x << " ";
    }

    return 0;
}
