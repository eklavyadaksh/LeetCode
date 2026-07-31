// Last updated: 7/31/2026, 7:24:04 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        
        vector<int> index;
        while(left<right){
            if(numbers[left]+numbers[right]==target)
             return{left+1,right+1};
            else if(numbers[left]+numbers[right]>target)
                right--;
            else
              left++;
        }
  return {} ; }
};