// Last updated: 11/26/2026, 11:48:55 PM
class Solution {
public:
    int beautySum(string s) {
        int sum = 0;

        for(int i = 0; i < s.length(); i++) {
            vector<int> freq(26, 0);

            for(int j = i; j < s.length(); j++) {
                freq[s[j] - 'a']++;

                int a = *max_element(freq.begin(), freq.end());

                int b = INT_MAX;
                for(int k = 0; k < 26; k++) {
                    if(freq[k] > 0) {
                        b = min(b, freq[k]);
                    }
                }

                sum += a - b;
            }
        }

        return sum;
    }
};