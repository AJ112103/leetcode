#include <iostream> 

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int n = 0; n < nums.size(); n++){
            if(i < 2 || nums[n] != nums[i-2]){
                nums[i] = nums[n];
                i++;
            }
        }
        return i; 
    }
};