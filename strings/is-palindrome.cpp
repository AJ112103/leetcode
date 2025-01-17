#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int j = s.length() - 1;
        int i = 0;

        while(i <= j){
            if(!iswalnum(s[i])){
                i++;
                continue;
            }
            if(!iswalnum(s[j])){
                j--;
                continue;
            }
            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;  
    }
};