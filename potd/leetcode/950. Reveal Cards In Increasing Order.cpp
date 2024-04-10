#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n=deck.size();
        vector<int>ans(n);
        queue<int>q;
        
        for(int i=0;i<n;i++)q.push(i);
        for(int i=0;i<n;i++)
        {
            ans[q.front()]=deck[i];
            q.pop();
            int a=q.front();
            q.pop();
            q.push(a);
        }
        return ans;
// Input: deck = [17,13,11,2,3,5,7]
//Output: [2,13,3,11,5,17,7]
// toh isme kya krna hai ki hme phle queue mein index daalne hai then phle index ka element apne 
// and mein daalna hai then jo next element hai usko last mein push kr dena hai 
// hn sort krne ke baad krna ye sab aur ek baat ki just compare the index of output  and sorted deck you will
// get it the intuition agr nhi aye toh (tech courses naam se channel hai uski video :))

    }
};