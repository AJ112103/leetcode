#include <iostream>

using namespace std;

class Solution {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
            vector<int> result(nums.size() * 2, 0);
            int j = nums.size();
            for(int i = 0; i < nums.size(); i++){
                result[i] = nums[i];
                result[j] = nums[i];
                j++;
            }
            return result;
        }
        
    };