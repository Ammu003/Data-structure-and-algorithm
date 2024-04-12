#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& h) {
        
        int n=h.size();
        vector<int>l(n);
        vector<int>r(n);

        l[0]=h[0];
        for(int i=1;i<n;i++)
        {
            l[i]=max(l[i-1],h[i]);
        }

        r[n-1]=h[n-1];
        for(int i=n-2;i>=0;i--)
        {
            r[i]=max(r[i+1],h[i]);
        }
        int sum=0;
        for(int i=1;i<n-1;i++)
        {
            sum+=abs(min(l[i],r[i])-h[i]);
        }
        return sum;
    }

    //   https://www.youtube.com/watch?v=349iqTWuBHc
};