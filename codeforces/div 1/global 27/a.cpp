#include "bits/stdc++.h"
using namespace std;
#define ll long long
const int MOD = 1e13;
int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n,m,r,c;
        cin >> n >> m >> r >> c;
        cout << ((n-r) * (2*m-1) + (m-c))<< endl;
    }
    return 0;
}