// Last updated: 7/28/2026, 7:36:29 PM
1class Solution {
2public:
3    void setZeroes(vector<vector<int>>& matrix) {
4       
5int col0=1;
6int m=matrix[0].size();
7int n=matrix.size();
8// First pass
9for (int i = 0; i < matrix.size(); i++) {
10    for (int j = 0; j < matrix[0].size(); j++) {
11        if (matrix[i][j] == 0) {
12            matrix[i][0] = 0;
13            if(j!=0)
14            matrix[0][j] = 0;
15            else
16             col0=0;
17        }
18    }
19} 
20for (int i = 1; i <n; i++) {
21    for (int j = 1; j < m; j++){
22            if(!matrix[i][0]|| !matrix[0][j])
23                 matrix[i][j]=0;
24
25
26    }
27
28}
29
30    if(matrix[0][0]==0 ){
31        for(int i=0;i<m;i++) matrix[0][i]=0;
32    }
33    if(col0==0){
34        for(int i=0;i<n;i++) matrix[i][0]=0;
35    }  
36
37
38
39
40    }
41};