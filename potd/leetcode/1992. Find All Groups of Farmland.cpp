#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        
        vector<vector<int>>ans;
        int n=land.size();
        int m=land[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vector<int>res(4);
                if(land[i][j]==1)
                {
                    res[0]=i;
                    res[1]=j;
                    int r=i,c=j;
                    for( r=i;r<n  and land[r][j]==1;r++)
                    {
                        for( c=j;c<m and land[r][c]==1;c++)
                        {
                            land[r][c]=2;
                        }
                    }
                    res[2]=r-1;
                    res[3]=c-1;
                    ans.push_back(res);
                }
            }
        }
        return ans;


    }
};