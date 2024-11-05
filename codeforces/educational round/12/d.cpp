//
// Created by sarthakzzzzz on 21-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
void sieve(int n){
    vector<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
}
int main(){
    int count =0 ;
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;cin>>n;
    int k;
    vi a(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i];
        if(a[i]==1) count++;
        if(a[i]!=1) k = a[i];
    }
    if(k) count++;
    if(count>2){
        cout<<count<<'\n';
        for(int i =0;i<count -(k!=-1);i++) cout<<1<<' ';

    }
}