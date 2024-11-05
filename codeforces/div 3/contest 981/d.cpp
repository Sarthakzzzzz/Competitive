//
// Created by sarthakzzzzz on 24-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
int main() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        unordered_set<long long> seen;
        long long pre = 0;
        int cnt = 0;
        seen.insert(0); 
        for (int i = 0; i < n; ++i) {
            pre += a[i];
            if (seen.find(pre) != seen.end()) {
                cnt++;
                seen.clear();
                seen.insert(0);  
                pre = 0;
            }
            seen.insert(pre);
        }
        cout << cnt << endl;
    }
    return 0;
}
