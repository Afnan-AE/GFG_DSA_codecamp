#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int n)
    {
        int c = 1, val = a[0];
        for(int i = 1; i < n; i++){
            if(a[i] == val) c++;
            else{
                c--;
                if(c==0){
                    val = a[i];
                    c=1;
                }
            }
        }
        c = 0;
        for(int i = 0; i < n; i++) if(val == a[i]) c++;
        if(c > (n/2)) return val;
        else return -1;
        
    }
};