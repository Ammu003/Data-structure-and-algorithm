#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans=0,up,down,left,right;
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    if(i==0)up=1;
                    else up=grid[i-1][j]==0;

                    if(j==0)left=1;
                    else left=grid[i][j-1]==0;

                    if(i==n-1)down=1;
                    else down=grid[i+1][j]==0;

                    if(j==m-1)right=1;
                    else right=grid[i][j+1]==0;

                    ans+=up+right+down+left;
                }
                
            }
        }
        return ans;
    }
};