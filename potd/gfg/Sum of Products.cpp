#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long pairAndSum(int n, long long arr[]) {
        vector<int> bits(32,0);
        for(int i=0;i<n;i++){
            int temp = arr[i];
            int j=0;
            // this is to find the number of 1 at ith position from back
            // Check each bit in the current number:

// The while loop runs as long as temp is not zero.
// Inside the loop:
// if(temp & 1): This checks if the least significant bit of temp is 1.
//If it is, it increments bits[j], which is the count of how many 
//numbers have a '1' in the j-th bit position.
// j++: Move to the next bit position.
// temp >>= 1: Right-shift temp by 1 bit. This moves the next bit 
//into the least significant bit position to be checked in the next 
//iteration.
// Detailed step-by-step for your array:

// For 5 (0101):

// Check bit 0: 5 & 1 = 1, so bits[0] becomes 1.
// Check bit 1: 5 >> 1 = 2 (10), and 2 & 1 = 0, so bits[1] remains 0.
// Check bit 2: 5 >> 2 = 1 (01), and 1 & 1 = 1, so bits[2] becomes 1.
// Check bit 3: 5 >> 3 = 0, so the loop exits.
            while(temp){
                if(temp&1)bits[j]++;
                j++;
                temp>>=1;
            }
        }
        long long ans = 0;
        for(int i=0;i<32;i++){
            long long temp = bits[i];
            temp--;
            long long pairs = (temp*(temp+1))/2;
            ans+=(pairs*(long long)pow(2,i));
        }
        return ans;
    }
};