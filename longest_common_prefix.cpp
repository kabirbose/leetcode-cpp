#include <iostream>
#include <vector>

std::string longest_common_prefix(std::vector<std::string>& strs) {
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

    std::string prefix = longest_common_prefix(strs);
    std::cout << prefix << "\n";

    return 0;
}