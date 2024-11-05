//
// Created by sarthakzzzzz on 24-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int sum = 0;
      for(auto &x : a) cin>>x;
        for (int i = 1; i <n/2 ; ++i) {
            if(a[i]==a[i-1] or a[n-i]==a[n-i-1]) swap(a[i],a[n-i-1]);
        }
        int ans = 0;
        for(int i =1;i<n;++i){
            ans+=a[i]==a[i-1];
        }
        cout<<ans<<'\n';
    }

    return 0;
}
