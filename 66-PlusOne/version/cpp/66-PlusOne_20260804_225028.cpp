// Last updated: 8/4/2026, 10:50:28 PM
1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4   
5        for(int i=digits.size()-1;i>=0;i--){
6                 if(digits.size()==1 && digits[i]==9)return {1,0};
7            if(digits[i]<9){
8                digits[i]+=1;
9                return digits;
10            }
11            else{
12                digits[i]=0;
13              
14            }
15
16                
17            
18        }
19         digits.insert(digits.begin(),1);
20
21        
22   return digits; }
23};