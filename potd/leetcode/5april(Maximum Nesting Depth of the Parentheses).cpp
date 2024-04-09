#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxi=0;
        for(auto i:s)
            {
            if(i=='(')
                {
                st.push(i);
                int n=st.size();
                maxi=max(maxi,n);
            }
            else if(i==')')
                {
                st.pop();
            }
        }
        return maxi;
    }
};