// Last updated: 7/31/2026, 7:22:16 PM
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int p1=0,p2=0;
         vector<int> vec;
         sort(nums1.begin(),nums1.end());
         sort(nums2.begin(),nums2.end());
         while(p1<nums1.size() && p2<nums2.size()){
            if(nums1[p1]==nums2[p2]){
                vec.push_back(nums1[p1]);
                p1++;
                p2++;
            }
            else if(nums1[p1]>nums2[p2])
               p2++;
               else
                p1++;

         }
         if(vec.empty())
         return -1;
         if (vec.empty()) return 0; // Handle empty vector safely
    return *min_element(vec.begin(), vec.end());
    }
};