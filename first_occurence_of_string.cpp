#include <iostream>

int index(std::string haystack, std::string needle) {
    if (needle.size() == 0) return 0; // needle can't be empty
    if (needle.size() > haystack.size()) return -1; // needle can't be longer than haystack

    for (int i = 0; i <= haystack.size() - needle.size(); i++) { // loop through valid starting positions where needle fits in haystack (prevents out-of-bounds)
        int j = 0;

        // haystack[i+j] is the "current" value in haystack and needle[j] is the "current" value in needle
        // we also need to check if j < needle.size() so we can break out of the loop to check the next line (j == needle.size())
        // if the current values match and j < needle.size(), increment j by 1 repeatedly
        while (j < needle.size() && haystack[i+j] == needle[j]) j++;

        // this means that we have iterated through needle
        // we can return needles position in haystack, which is "i"
        if (j == needle.size()) return i;
    }

    // once "i" reaches its limit, it means no needle is found in haystack
    // we can safely return -1
    return -1;
}

int main() {
    std::string haystack = "sadbutsad";
    std::string needle = "sad";

    std::cout << index(haystack, needle) << '\n';

    return 0;
}