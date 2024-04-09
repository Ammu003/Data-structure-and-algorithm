#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        
        int cnt=0;
        int i=0;
        int n=t.size();
        while(t[k]>0)
        {
            if(t[i%n]>0)
            {
                t[i%n]-=1;
                cnt++;
            }
            i++;
        }
        // %n is used so that i can be saved from using 2 for loop eg after i==3 then i==4 so i%n ==0 then 1 2 3 0 like this 
        return cnt;
    }
};