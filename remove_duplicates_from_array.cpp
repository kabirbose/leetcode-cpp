#include <iostream>
#include <vector>
#include <unordered_set>

int removeDuplicates(std::vector<int>& nums) {
    int k = 0;
    std::unordered_set<int> lookup = {};

    for (int i = 0; i < nums.size(); i++) {
        if (lookup.find(nums[i]) == lookup.end()) {
            lookup.insert(nums[i]);
            nums[k] = nums[i];  
            k++;
        }
    }

    return k;
}

int main() {
    std::vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    int res = removeDuplicates(nums);
    std::cout << res << "\n";

    return 0;
}