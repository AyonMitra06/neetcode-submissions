
class Solution {
public:
    int characterReplacement(string s, int k) {

            int left = 0;
                    int maxFreq = 0;
                            int maxLength = 0;

                                    int freq[26] = {0};

                                            for (int right = 0; right < s.size(); right++) {

                                                        // Add current character
                                                                    freq[s[right] - 'A']++;

                                                                                // Update maximum frequency
                                                                                            maxFreq = max(maxFreq, freq[s[right] - 'A']);

                                                                                                        // Shrink window if invalid
                                                                                                                    if ((right - left + 1) - maxFreq > k) {
                                                                                                                                    freq[s[left] - 'A']--;
                                                                                                                                                    left++;
                                                                                                                                                                }

                                                                                                                                                                            // Update answer
                                                                                                                                                                                        maxLength = max(maxLength, right - left + 1);
                                                                                                                                                                                                }

                                                                                                                                                                                                        return maxLength;
                                                                                                                                                                                                            }
                                                                                                                                                                                                            };
                                                                                                                                                                                                            
