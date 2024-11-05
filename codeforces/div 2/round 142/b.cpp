//
// Created by sarthakzzzzz on 06-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
#define ll long long int
bool isprime(ll n){
    for(ll d =2;d*d<=n;d++){
        if(n%d==0)
            return false;
    }
    return n>=2;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll y = sqrt(n);
        if(isprime(y) && y*y==n) cout<<"YES"<<'\n';
        else{cout<<"NO"<<'\n';}
    }
}