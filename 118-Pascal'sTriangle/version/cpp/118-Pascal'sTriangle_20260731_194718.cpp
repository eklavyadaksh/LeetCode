// Last updated: 7/31/2026, 7:47:18 PM
1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4        vector<vector<int>> v;
5            if(numRows == 0) return v; 
6        if(numRows==1)return {{1}};
7       
8        else{
9            
10             v.insert(v.end(),{{1},{1,1}});
11          
12            for(int n=2;n<numRows;n++){
13            int i=0;
14              vector<int> v1 = v.back();
15              vector<int> curr;
16              curr.push_back(1);
17            while( i<v1.size()-1){
18               
19                  curr.push_back(v1[i] + v1[i + 1]);
20              
21                i++;
22
23            }
24            curr.push_back(1);
25            v.push_back(curr);
26            }
27        }
28    return v;}
29};