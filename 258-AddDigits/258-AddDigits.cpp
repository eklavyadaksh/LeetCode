// Last updated: 02/04/2026, 23:55:58
1class Solution {
2public:
3    int addDigits(int num) {
4        return num == 0 ? 0 : 1 + (num - 1) % 9;
5    }
6};