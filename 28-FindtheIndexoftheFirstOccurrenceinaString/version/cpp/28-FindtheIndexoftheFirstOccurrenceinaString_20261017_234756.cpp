// Last updated: 10/17/2026, 11:47:56 PM
1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4    size_t pos = haystack.find(needle);
5
6    if (pos == string::npos) return -1;
7    return pos;
8}
9};