#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dp[100];
    int search(int n){
        if( n==0) return 0;
        if(n==1 || n==2) return 1;
        if(dp[n]!= -1) return dp[n];
        return dp[n] = search(n-3) + search(n-2) + search(n-1); 
    }
    int tribonacci(int n) {
        memset(dp,-1,sizeof(dp));
        return search(n);
    }
};