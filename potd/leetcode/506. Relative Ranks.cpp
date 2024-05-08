#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        int n=score.size();
        priority_queue<int>pq(score.begin(),score.end());
        unordered_map<int,string>mp;
        int count=1;
        if(!pq.empty())
        {
            mp[pq.top()]="Gold Medal";
            pq.pop();
            count++;
        }
        if(!pq.empty())
        {
            mp[pq.top()]="Silver Medal";
            pq.pop();
            count++;
        }
        if(!pq.empty())
        {
            mp[pq.top()]="Bronze Medal";
            pq.pop();
            count++;
        }

        while(!pq.empty())
        {
            mp[pq.top()]=to_string(count);
            count++;
            pq.pop();
        }
        vector<string>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(mp[score[i]]);
        }
        return ans;

    }
};