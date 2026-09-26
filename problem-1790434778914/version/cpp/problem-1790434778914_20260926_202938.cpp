// Last updated: 9/26/2026, 8:29:38 PM
1class Solution {
2public:
3    int minQueenMoves(vector<int>& source, vector<int>& target) {
4        if(source[0]==target[0] && source[1]==target[1])return 0;
5        else if(source[0]+source[1]==target[0]+target[1])return 1;
6         else if(source[0]-source[1]==target[0]-target[1])return 1;
7        else if(source[0]==target[1] && source[1]==target[0])return 1;
8        else if(source[0]==target[0])return 1;
9        else if(source[1]==target[1])return 1;
10        else return 2;
11    }
12};