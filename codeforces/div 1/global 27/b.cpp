#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int MOD = 1e13;
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;

        if(n == 1 || n == 3) {
            cout << -1 << endl;
            continue;
        } else if (n % 2 == 0) {
            for (int i = 0; i < n - 2; ++i) {
                cout << '3';
            }
            cout << "66" << endl;
        } else {
            for (int i = 0; i < n - 4; ++i) {
                cout << '3';
            }
            cout << "6366" << endl;
        }
    }
    return 0;
}
