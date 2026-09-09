// Last updated: 9/9/2026, 10:13:23 PM
1class Solution {
2public:
3    int findKthPositive(vector<int>& vec, int k) {
4       int i=1;
5       int count=0;
6       while(i>0){
7      if (!(find(vec.begin(), vec.end(), i) != vec.end())){
8            count++;
9        }
10        if(count==k)return i;
11        i++;
12       }
13   return 0; }
14};