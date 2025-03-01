#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> two_sum(std::vector<int> nums, int target) {
    std::unordered_map<int, int> hash_table = {};
    
    for (int i = 0; i < nums.size(); i++) {
        int x = target - nums[i];
        
        if (hash_table.find(x) != hash_table.end()) {
            return {hash_table.at(x), i};
        };
        
        hash_table[nums[i]] = i;
    };
    
    return {};
}; 

int main() {
    std::vector<int> nums = {2,7,11,15};
    int target = 9;
    
    std::vector<int> result = two_sum(nums, target);
    
    for (int index : result) {
        std::cout << index << " ";
    };

    return 0;
}