#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(i);                
            }else if(s[i]==')'){
                if(!st.empty() && s[st.top()]=='(')
                    st.pop();
                else
                    st.push({i});
            }
        }
        while(!st.empty()){
            s.erase(s.begin()+st.top());
            st.pop();
        }
        return s;
    }
};