#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int index=-1;
        for(int i=0;i<word.length();i++)
        {
            if(word[i]==ch)
            {
                index=i;
                break;
            }
        }
        string res="";
        if(index!=-1)
        {
            string s=word.substr(0,index+1);
            reverse(s.begin(),s.end());
            res+=s;
        }
        for(int i=index+1;i<word.length();i++)
        {
            res.push_back(word[i]);
        }
        return res;
    }
};