// Last updated: 03/04/2026, 12:28:20
1class Solution {
2public:
3    int distributeCandies(vector<int>& candyType) {
4        unordered_set<int> type(candyType.begin(),candyType.end());
5            int n=candyType.size()/2;
6            if(type.size()>=n)
7              return n;
8            if(type.size()==1)
9             return 1;
10            if(type.size()<n)
11               return type.size();
12            
13       
14   return n; }
15};