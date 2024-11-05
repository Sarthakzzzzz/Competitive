//
// Created by sarthakzzzzz on 06-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
#define ll long long int
ll gcd (ll a,ll b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m);
    for(int i =0;i<n;i++){cin>>a[i];}
    for(int j =0;j<m;j++){cin>>b[j];}
    ll g =0;
    for(int i =1;i<n;i++) g = gcd(g,abs(a[i]-a[0]));
    for(int j = 0;j<m;j++){
        if(j>0){
            cout<<" ";
        }
        cout<<gcd(a[0]+b[j],g)<<" ";
    }
    cout<<'\n';
    return 0;
}
