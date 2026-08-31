// Last updated: 9/1/2026, 12:07:05 AM
1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        if(nums.size()==1)return nums[0];
5        if(nums[0]!=nums[1])return nums[0];
6    if(nums[nums.size()-1]!=nums[nums.size()-2])return nums[nums.size()-1];
7        int low=1,high=nums.size()-2;
8        while(low<=high){
9          int mid = low + (high - low) / 2;
10
11        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
12            return nums[mid];
13
14        // Valid pair is (mid-1, mid)
15        // Therefore single element is on the right.
16        if (mid % 2 == 1 && nums[mid] == nums[mid - 1])
17        {
18            low = mid + 1;
19        }
20        // Valid pair is (mid, mid+1)
21        // Therefore single element is on the right.
22        else if (mid % 2 == 0 && nums[mid] == nums[mid + 1])
23        {
24            low = mid + 2;
25        }
26        else
27        {
28            high = mid - 1;
29        }
30    }
31
32    return -1;}
33};