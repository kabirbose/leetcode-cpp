#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val) {
    int k = 0;

    for (int i = nums.size()-1; i >= 0; i--) {
        if (nums[i] == val) nums.erase(nums.begin() + i);
        else k++;
    }

    return k;
}

int main() {
    std::vector<int> x = {0,1,2,2,3,0,4,2};
    int y = 2;

    int res = removeElement(x, y);
    std::cout << removeElement << "\n";

    return 0;
}