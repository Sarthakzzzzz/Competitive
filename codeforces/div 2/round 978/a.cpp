//
// Created by sarthakzzzzz on 14-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        int vacant = 0, count =0;
        vector<int>p(n);
        for(int i =0;i<n;i++){
            cin>>p[i];
        }
        sort(p.begin(),p.end());
        for (int i = 0; i < n; ++i) {
            r-=p[i]/2;
            count += (p[i]/2)*2;
            vacant+=(p[i]%2);
        }
        cout<<count+min(vacant,2*r-vacant)<<"\n";
    }
    return 0;
}