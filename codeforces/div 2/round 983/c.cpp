//
// Created by sarthakzzzzz on 01-11-2024.
//
#include "bits/stdc++.h"
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t > 0) {
        t--;
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int res = INT_MAX;
        for (int i = 0; i < n - 1; ++i) {
            int sum = arr[i] + arr[i + 1];
            int pos = lower_bound(arr.begin(), arr.end(), sum) - arr.begin();
            res = min(res, n - pos + i);
        }

        cout << res << endl;
    }

    return 0;
}
