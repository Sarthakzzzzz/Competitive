    //
    // Created by sarthakzzzzz on 02-11-2024.
    //
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    ll total = 0;
    ll pre_sum = 0;
    unordered_map<int, int> mod_count;
    mod_count[0] = 1;

    for (int i = 0; i < n; ++i) {
        pre_sum += a[i];
        int mod_val = pre_sum % m;
        total += mod_val;
        if (mod_count.find(mod_val) != mod_count.end()) {
            total += mod_count[mod_val] * mod_val;
        }
        mod_count[mod_val]++;
    }

    cout << total << endl;
    return 0;
}