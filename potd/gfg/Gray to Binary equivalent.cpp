#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        int res=0;
        //n=1000 like this n is given in binary form 
        while(n)
        {
            res^=n;// xor with prev element 
            n=n>>1;// rightshifting 
            // https://www.youtube.com/watch?v=NF1VFVzjuE4   (video ref)
        }
        return res;
        
    }
};