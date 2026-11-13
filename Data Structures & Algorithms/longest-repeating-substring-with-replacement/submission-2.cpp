
class Solution {
public:
    int characterReplacement(string s, int k) {

    int left = 0;
    int maxLength = 0;
    int freq[26] = {0};

    for (int right = 0; right < s.size(); right++) {

    // Include the new character
                                                            freq[s[right] - 'A']++;

                                                                        // Find the maximum frequency in the window
                                                                                    int maxFreq = 0;

                                                                                                for (int i = 0; i < 26; i++) {
                                                                                                                maxFreq = max(maxFreq, freq[i]);
                                                                                                                            }

                                                                                                                                        // Shrink while the window is invalid
                                                                                                                                                    while ((right - left + 1) - maxFreq > k) {

                                                                                                                                                                    freq[s[left] - 'A']--;

                                                                                                                                                                                    left++;
                                                                                                                                                                                                }

                                                                                                                                                                                                            // Update the longest valid window
                                                                                                                                                                                                                        maxLength = max(maxLength, right - left + 1);
                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                        return maxLength;
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                            };

