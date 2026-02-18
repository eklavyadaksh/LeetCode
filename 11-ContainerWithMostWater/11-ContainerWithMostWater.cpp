// Last updated: 18/02/2026, 18:02:25
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left=0;
5        int right=height.size()-1;
6        int maxarea=0;
7        
8
9        
10
11        while(left<right){
12           int area=abs(right-left)*min(height[left],height[right]);
13           
14             
15         if (area > maxarea)
16                maxarea = area;
17
18            if (height[left] < height[right])
19                left++;
20            else
21                right--;
22        }
23        return maxarea;
24    }
25};