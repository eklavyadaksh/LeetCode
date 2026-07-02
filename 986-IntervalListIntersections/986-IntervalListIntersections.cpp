// Last updated: 7/2/2026, 2:19:15 PM
1class Solution {
2public:
3    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
4         vector<vector<int>> ans;
5        int i=0,j=0;
6        
7        while(i<firstList.size() && j<secondList.size()){
8            int start = max(firstList[i][0],secondList[j][0]);
9            int end = min(firstList[i][1],secondList[j][1]);
10            if(start<=end)
11               ans.push_back({start,end});
12            if(firstList[i][1]<secondList[j][1])
13              i++;
14            
15            else
16               j++;
17            
18
19
20             
21        }
22        return ans;
23    }
24};