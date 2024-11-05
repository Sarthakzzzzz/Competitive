//
// Created by sarthakzzzzz on 21-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
const int MAX = 1e9;
typedef vector<int> vi;
int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int main(){
    int n;cin>>n;
    vi A(n);
    vi res;
    for (int i = 0; i < n; ++i) cin>>A[i];
    for (int i = 1; i<= n ; ++i) {
        if(is_sorted(A.begin(),A.end())){
            if(gcd(A[i],A[i+1])>1){
                res.push_back(A[i]);
            }
        }
    }
    for (int i = 0; i < res.size(); ++i) {
        cout<<res[i]<<'\n';
    }
    cout<<res.size();
    return 0;
}

