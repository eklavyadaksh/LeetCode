// Last updated: 7/31/2026, 7:22:56 PM
class Solution {
public:
    int bfs(vector<vector<int>>grid,queue<pair<int,int>>&q, vector<vector<int>>&status)
    {
        int M=grid.size();
        int N=grid[0].size();
        int moves=INT_MAX;

        while(!q.empty()){
            pair<int,int>p;
            p=q.front();
            q.pop();
            int i,j;
            i=p.first;
            j=p.second;
            
            if(j+1<N&&grid[i][j+1]==1)
            {
                if(status[i][j+1]==-1)
                {
                    status[i][1+j]=status[i][j]+1;
                    grid[i][j+1]=2;
                    q.push({i,1+j});
                }
            }
            if(j-1>=0 && grid[i][j-1]==1){
                if(status[i][j-1]==-1){
                    status[i][j-1]=status[i][j]+1;
                    grid[i][j-1]=2;
                    q.push({i,j-1});
                }
            }
            if (i-1>=0 && grid[i-1][j]==1)
            {
                if(status[i-1][j]==-1)
                {
                    status[i-1][j]=status[i][j]+1;
                    grid[i-1][j]=2;
                    q.push({i-1,j});
                }
            }
            if(i+1<M&& grid[i+1][j]==1){
                if(status[i+1][j]==-1){
                    status[i+1][j]=status[i][j]+1;
                    grid[i+1][j]=2;
                    q.push({i+1,j});
                }
            }


              

        }
        int flag=0;
        int m=0;
        
        for(int i=0;i<M && flag==0;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==1){
                    flag=1;
                    break;
                
                }
                else
                {
                   if(status[i][j]>m)
                   m=status[i][j]; 
                }
            }
        }
        if(flag==1)
           return INT_MAX;
           else 
             return m;

    }
    int orangesRotting(vector<vector<int>>& grid) {
        int M=grid.size();
        int N=grid[0].size();
        int flag=0;
        int moves=INT_MAX;
        int count2=0,count1=0;
        queue<pair<int,int>>q;
        vector<vector<int>>status(M,vector<int>(N,-1));
        for(int i=0;i<M;i++)
        {
            for(int j=0;j<N;j++){
                if(grid[i][j]==1)
                  count1++;
                if(grid[i][j]==2)
                  {
                    count2++;
                    status[i][j]=0;
                    q.push({i,j});
                  }
            }
        }
        if(count2==0 && count1==0)
         return 0;
        moves=bfs(grid,q,status);

        if(moves==INT_MAX)
          return -1;
        else
          return moves;
    }
};