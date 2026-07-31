// Last updated: 7/31/2026, 7:23:27 PM
class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);

        int i = s.size() - 2;

        // step 1: find first decreasing element
        while (i >= 0 && s[i] >= s[i + 1]) i--;

        if (i < 0) return -1;

        // step 2: find just larger element to the right
        int j = s.size() - 1;
        while (s[j] <= s[i]) j--;

        // step 3: swap
        swap(s[i], s[j]);

        // step 4: reverse suffix
        reverse(s.begin() + i + 1, s.end());

        // step 5: convert and check overflow
        long long ans = stoll(s);
        return (ans > INT_MAX) ? -1 : ans;
    }
};