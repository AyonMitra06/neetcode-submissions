#include <bits/stdc++.h>
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        string sortedS1 = s1;
        sort(sortedS1.begin(), sortedS1.end());
        for(int i = 0; i<s2.size(); i++){
            string subString = s2.substr(i,s1.size());
            sort(subString.begin(), subString.end());
            
            if(sortedS1 == subString){
                return true;
            }
        }
        return false;
    }
};
