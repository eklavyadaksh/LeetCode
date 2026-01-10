// Last updated: 10/01/2026, 11:52:29
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
         int n =nums.size();
        vector<int> arr(2*n);
        for(int i=0;i<n;i++){
            
            arr[i]=nums[i];
            arr[i+n]=nums[i];
        }
        return arr;
        
    }
};