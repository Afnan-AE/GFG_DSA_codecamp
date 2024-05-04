#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    //
    
    
    vector<int> np(int n, vector<int>& v){
        if(n==1) return v;

        int i = 1, lastInc = -1;
        while(i<n){
            if(v[i]>v[i-1]) lastInc = i;
            i++;
        }
        
        if(lastInc == -1){
            for(int i = 0; i < (n/2); i++){
                swap(v[i], v[n-i-1]);
            }
        }
        else{
            int ind = lastInc;
            for(int i = lastInc; i < n; ++i){
                if(v[i]>v[lastInc-1] && v[i] < v[ind]){
                    ind = i;
                }
            }
            swap(v[lastInc-1], v[ind]);
            sort(v.begin()+lastInc, v.end());  

            return v;
        }
        
    }
};

int main(){
    Solution l;
    int n; cin >> n;
    int t = n;
    vector<int> v;
    int ans;
    while(t--){cin >> ans; v.push_back(ans);}

    l.np(n,v);

    for(int eg: v) cout << eg << ' ';

    return 0;
}