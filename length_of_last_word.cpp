#include <iostream>

int lengthOfLastWord(std::string s) {
    int res = 0;

    for (int i = s.size()-2; i >= 0; i--) {
        if (s[i] != ' ') res++;
        else if (s[i] == ' ' && (s[i+1] != ' ')) break;
    }

    if (s[s.size()-1] != ' ') return res+1;
    return res;
}

int main() {
    int res = lengthOfLastWord("luffy is still joyboy");
    std::cout << res << "\n";

    return 0;
}