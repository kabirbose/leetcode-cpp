#include <iostream>
#include <unordered_map>

int roman_to_string(std::string s) {
    std::unordered_map<char, int> hash_table = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int z = 0;

    for (int i = 1; i < s.size(); i++) {
        int j = i-1;

        if (hash_table.at(s[j]) >= hash_table.at(s[i])) z += hash_table.at(s[j]);
        else z-= hash_table.at(s[j]);
    }

    z += hash_table.at(s[s.size()-1]);

    return z;
}

int main() {
    std::string s = "LVIII";

    int y = roman_to_string(s);
    std:: cout << y << "\n";

    return 0;
}