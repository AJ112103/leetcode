#include <iostream>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> hashmap;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(hashmap.count(complement)){
                return {hashmap[complement], i};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    };
};