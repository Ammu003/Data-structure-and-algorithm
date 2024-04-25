#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int>v(26,0);
        int res=0;
        for(int i=0;i<s.length();i++)
        {
            int pos=s[i]-'a';
            int left=max(0,pos-k);
            int right=min(25,pos+k);
            int ans=0;
            int maxi=0;
            for(int j=left;j<=right;j++)
            {
                maxi=max(maxi,v[j]);
            }
            v[pos]=max(v[pos],maxi+1);
            res=max(res,v[pos]);
        }
        return res;
    }
};