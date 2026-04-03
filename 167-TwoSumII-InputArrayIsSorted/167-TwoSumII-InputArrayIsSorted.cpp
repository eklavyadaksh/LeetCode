// Last updated: 03/04/2026, 23:48:33
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int left=0;
5        int right=numbers.size()-1;
6        
7        vector<int> index;
8        while(left<right){
9            if(numbers[left]+numbers[right]==target)
10             return{left+1,right+1};
11            else if(numbers[left]+numbers[right]>target)
12                right--;
13            else
14              left++;
15        }
16  return {} ; }
17};