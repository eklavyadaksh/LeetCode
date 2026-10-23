// Last updated: 10/23/2026, 10:21:12 PM
1class Solution {
2public:
3    int totalFruit(vector<int>& fruits) {
4        int left=0,ans=INT_MIN;
5        unordered_map<int,int> mp;
6
7        for(int right=0;right<fruits.size();right++){
8          
9            mp[fruits[right]]++;
10            while(mp.size()>2){
11                mp[fruits[left]]--;
12                  if(mp[fruits[left]]==0)
13                      mp.erase(fruits[left]);
14
15                      
16            
17          
18                left++;
19           
20            }
21           ans=max(ans,right-left+1);
22
23        }
24   return ans; }
25};