#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& s) {
        
        queue<int>q;
        int rotate=0,i=0;
        int n=students.size();
        for(int i=0;i<n;i++)
        {
            q.push(students[i]);
        }

        while(q.size() and rotate<q.size())
        {
            if(q.front()==s[i])
            {
                i++;
                q.pop();
                rotate=0;
            }
            else {
                int a=q.front();
                q.pop();
                q.push(a);
                rotate++;
            }
        }
        return q.size();
    }
};