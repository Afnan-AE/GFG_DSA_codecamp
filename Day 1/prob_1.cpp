#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long> v(n);
        v[0] = 1;
        if(n>1) v[1] = 1;
        for(int i = 2; i < n; i++){
            v[i] = v[i-1] + v[i-2];
        }
        
        return v;
    }
};