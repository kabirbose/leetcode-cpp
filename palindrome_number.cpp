#include <iostream>

bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        
    int reversed = 0;
    std::cout << x << ", " << reversed << "\n";

    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
        std::cout << x << ", " << reversed << "\n";
    }
    
    return x == reversed || x == reversed / 10; // first case is for numbers like 11, second case for other numbers
}

int main() {
    int x = 323;

    bool check = isPalindrome(x);

    return 0;
}