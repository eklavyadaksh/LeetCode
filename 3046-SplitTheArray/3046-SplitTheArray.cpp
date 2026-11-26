// Last updated: 11/26/2026, 11:48:04 PM
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) { 
        int n = nums.size(); 
        int count[101];
        for(int i = 0; i < n;i++){
            if(++count[nums[i]]>=3){
                return false;
            }
        }
        return true;
    }
};