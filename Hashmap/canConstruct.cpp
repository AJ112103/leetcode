#include <iostream>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> map;

        if(magazine.length() < ransomNote.length()){
            return false;
        }

        for(auto &i : magazine){
            if(!map.count(i)){
                map[i] = 1;
            }else {
                map[i]++;
            }
        }

        for(auto &j : ransomNote){
            if(!!map.count(j) && map[j] > 0){
                map[j]--;
            } else {
                return false;
            }
        }
        return true;
    }
};