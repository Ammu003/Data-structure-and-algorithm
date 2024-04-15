#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
        
        sort(b.begin(),b.end());
        vector<int>v;
        
        for(int i=0;i<q;i++)
        {
            int cnt=0;
            int ans=a[query[i]];
           auto it = upper_bound(b.begin(), b.end(), ans);
             cnt = it - b.begin();
            v.push_back(cnt);
        }
        return v;
    }
};