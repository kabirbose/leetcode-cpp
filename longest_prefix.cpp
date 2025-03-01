#include <iostream>
#include <vector>

std::string longestPrefix(std::vector<std::string>& strs) {
    if (strs.empty()) return "";

    std::string substr = strs[0];

    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(substr) != 0) {
            substr.pop_back();
            if (substr.empty()) return "";
        }
    }
    
    return substr;
}

int main() {
    std::vector<std::string> strs = {"flower", "flow", "flight"};

    std::string prefix = longestPrefix(strs);
    std::cout << prefix << "\n";  // Output: "fl"
}