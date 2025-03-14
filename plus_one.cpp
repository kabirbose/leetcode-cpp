#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits) {
    int n = digits.size()-1;

    // Start from the last digit
    for (int i = n; i >= 0; i--) {
        if (digits[i] < 9) { 
            digits[i]++;  // If it's not 9, just increment and return
            return digits;
        }
        digits[i] = 0; // If it's 9, turn it to 0 and continue
    }

    // If all digits were 9, we need an extra leading 1
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    std::vector<int> digits = {4,3,5};
    std::vector<int> res = plusOne(digits);

    for (int n : res) std::cout << n << '\n';

    return 0;
}