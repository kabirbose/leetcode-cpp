#include <iostream>
#include <stack>

bool isValid(std::string s) {
    std::stack<char> stack = {};

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack.push(s[i]);
        }
        else {
            if (stack.empty() || (s[i] == ')' && stack.top() != '(') || (s[i] == ']' && stack.top() != '[')|| (s[i] == '}' && stack.top() != '{')) {
                return false;
            }
            stack.pop();
        }
    }

    return stack.empty();
}

int main() {
    std::string s = "(]";
    bool result = isValid(s);
    std::cout << result << '\n';
    return 0;
}