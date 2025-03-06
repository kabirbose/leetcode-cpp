#include <iostream>

int strStr(std::string haystack, std::string needle) {
    int h = haystack.size();
    int n = needle.size();

    for (int i = 0; i <= h; i++) {
        if (i > h) break;
        if (haystack.substr(i, n) == needle) return i;
    }
    
    return -1;
}

int main() {
    int res = strStr("leetcodeio", "io");
    std::cout << res << "\n";

    return 0;
}