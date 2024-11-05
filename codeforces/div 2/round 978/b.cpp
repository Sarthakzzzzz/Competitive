//
// Created by sarthakzzzzz on 14-10-2024.
//
#include "bits/stdc++.h"
using namespace std ;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll>p(n);
        ll sum  =0 ;
        for (ll i = 0; i < n; ++i) {
            cin>>p[i];
            sum+=p[i];
        }
        auto ans = (sum +x -1)/x;
        auto k = *max_element(p.begin(),p.end());
        cout<<max(ans,k)<<'\n';
    }
    return 0;
}