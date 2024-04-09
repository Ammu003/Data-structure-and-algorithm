#include<bits/stdc++.h>
using namespace std;
class Solution{

	public:
	int help(int i,int j,int n,int m,vector<vector<int>> &points,vector<vector<int>> &dp){
	    if(i==m-1 && j==n-1)return 1-points[i][j];
	    if(i==m or j==n)return INT_MAX;
	    if(dp[i][j]!=-1)return dp[i][j];
	    int a = help(i+1,j,n,m,points,dp);
	    int b = help(i,j+1,n,m,points,dp);
	    return dp[i][j] = max(1,min(a,b)-points[i][j]);
	}
	int minPoints(int m, int n, vector<vector<int>> points) 
	{ 
	     vector<vector<int>> dp(m,vector<int>(n,-1));
	    return help(0,0,n,m,points,dp);
	} 
};