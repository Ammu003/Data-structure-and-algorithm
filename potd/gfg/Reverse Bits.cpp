#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long reversedBits(long long x) {
        vector<int>v(32,0);
        int i=0;
        while(x>0)
        {
            int rem=x%2;
            v[i]=rem;
            i++;
            x=x/2;
        }
        long long sum=0;
        int j=0;
        for(int i=31;i>=0;i--)
        {
            if(v[i]==1)
            {
                sum+=pow(2,j);
            }
            j++;
        }
        return sum;
    }
};