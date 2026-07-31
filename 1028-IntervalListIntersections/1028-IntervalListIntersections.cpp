// Last updated: 7/31/2026, 7:22:58 PM
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
         vector<vector<int>> ans;
        int i=0,j=0;
        
        while(i<firstList.size() && j<secondList.size()){
            int start = max(firstList[i][0],secondList[j][0]);
            int end = min(firstList[i][1],secondList[j][1]);
            if(start<=end)
               ans.push_back({start,end});
            if(firstList[i][1]<secondList[j][1])
              i++;
            
            else
               j++;
            


             
        }
        return ans;
    }
};