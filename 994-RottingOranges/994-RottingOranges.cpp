// Last updated: 19/03/2026, 16:06:42
1class Solution {
2public:
3    int bfs(vector<vector<int>>grid,queue<pair<int,int>>&q, vector<vector<int>>&status)
4    {
5        int M=grid.size();
6        int N=grid[0].size();
7        int moves=INT_MAX;
8
9        while(!q.empty()){
10            pair<int,int>p;
11            p=q.front();
12            q.pop();
13            int i,j;
14            i=p.first;
15            j=p.second;
16            
17            if(j+1<N&&grid[i][j+1]==1)
18            {
19                if(status[i][j+1]==-1)
20                {
21                    status[i][1+j]=status[i][j]+1;
22                    grid[i][j+1]=2;
23                    q.push({i,1+j});
24                }
25            }
26            if(j-1>=0 && grid[i][j-1]==1){
27                if(status[i][j-1]==-1){
28                    status[i][j-1]=status[i][j]+1;
29                    grid[i][j-1]=2;
30                    q.push({i,j-1});
31                }
32            }
33            if (i-1>=0 && grid[i-1][j]==1)
34            {
35                if(status[i-1][j]==-1)
36                {
37                    status[i-1][j]=status[i][j]+1;
38                    grid[i-1][j]=2;
39                    q.push({i-1,j});
40                }
41            }
42            if(i+1<M&& grid[i+1][j]==1){
43                if(status[i+1][j]==-1){
44                    status[i+1][j]=status[i][j]+1;
45                    grid[i+1][j]=2;
46                    q.push({i+1,j});
47                }
48            }
49
50
51              
52
53        }
54        int flag=0;
55        int m=0;
56        
57        for(int i=0;i<M && flag==0;i++){
58            for(int j=0;j<N;j++){
59                if(grid[i][j]==1){
60                    flag=1;
61                    break;
62                
63                }
64                else
65                {
66                   if(status[i][j]>m)
67                   m=status[i][j]; 
68                }
69            }
70        }
71        if(flag==1)
72           return INT_MAX;
73           else 
74             return m;
75
76    }
77    int orangesRotting(vector<vector<int>>& grid) {
78        int M=grid.size();
79        int N=grid[0].size();
80        int flag=0;
81        int moves=INT_MAX;
82        int count2=0,count1=0;
83        queue<pair<int,int>>q;
84        vector<vector<int>>status(M,vector<int>(N,-1));
85        for(int i=0;i<M;i++)
86        {
87            for(int j=0;j<N;j++){
88                if(grid[i][j]==1)
89                  count1++;
90                if(grid[i][j]==2)
91                  {
92                    count2++;
93                    status[i][j]=0;
94                    q.push({i,j});
95                  }
96            }
97        }
98        if(count2==0 && count1==0)
99         return 0;
100        moves=bfs(grid,q,status);
101
102        if(moves==INT_MAX)
103          return -1;
104        else
105          return moves;
106    }
107};