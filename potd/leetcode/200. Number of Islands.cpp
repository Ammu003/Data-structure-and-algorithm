#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   void f(int i,int j,vector<vector<char>>&grid,vector<vector<int>>&vis)
   {
       int n=grid.size();
       int m=grid[0].size();
       int dr[4]={1,-1,0,0};
       int dc[4]={0,0,-1,1};
       queue<pair<int,int>>q;
       q.push({i,j});
       vis[i][j]=1;
       while(!q.empty())
       {
          int r=q.front().first;
          int c=q.front().second;
          q.pop();
          for(int i=0;i<4;i++)
          {
             int nr=r+dr[i];
             int nc=c+dc[i];
             if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]=='1' && !vis[nr][nc])
             {
                vis[nr][nc]=1;
                q.push({nr,nc});
             }
          }

       }
   }
    int numIslands(vector<vector<char>>& grid) {
         
         int n=grid.size();
         int m=grid[0].size();
         vector<vector<int>>vis(n,vector<int>(m,0));
         int count=0;
         for(int i=0;i<n;i++)
         {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' && !vis[i][j])
                {
                     f(i,j,grid,vis);
                     count++;
                }
            }
         }
         return count;
    }
};