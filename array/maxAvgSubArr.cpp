#include <iostream>

using namespace std;

class Solution {
    public:
        double findMaxAverage(vector<int>& nums, int k) {
            if(k > nums.size()){
                return -1;
            }
            double maxSum, windowSum = 0.0;
    
            for(int i = 0; i < k; i++){
                windowSum += nums[i];
            }
    
            maxSum = windowSum;
    
            for(int i = 0; i < nums.size() - k; i++){
                windowSum -= nums[i];
                windowSum += nums[i + k];
                if(windowSum > maxSum){
                    maxSum = windowSum;
                }
            }
    
            return maxSum / k;   
        }
    };