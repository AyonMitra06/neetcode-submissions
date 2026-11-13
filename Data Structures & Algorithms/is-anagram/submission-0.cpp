class Solution {
public:
    bool isAnagram(string s, string t) {
        int frequency1[26] = {0};
        int frequency2[26] = {0};

        for (char c : s) {
            frequency1[c - 'a']++;
            }

            for (char c : t) {
                frequency2[c - 'a']++;
                }

                for (int i = 0; i < 26; i++) {
                    if (frequency1[i] != frequency2[i]) {
                            return false;
                                }
                                }

                                return true;
    }                              
};
