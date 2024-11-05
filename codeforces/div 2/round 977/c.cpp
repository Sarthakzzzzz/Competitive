//
// Created by sarthakzzzzz on 06-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
#define ll long long int
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        while (arr.size() > 1) {
            sort(arr.begin(), arr.end());
            int avg = (arr[0] + arr[1]) / 2;
            arr.erase(arr.begin());
            arr.erase(arr.begin());
            arr.push_back(avg);
        }
        cout << arr[0] << endl  ;
    }
    return 0;
}
