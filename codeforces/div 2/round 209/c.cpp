//
// Created by sarthakzzzzz on 13-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
#define ll long long
const ll mod = 1e9 + 7;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll power(ll a, ll b) {
    if (b == 0) return 1;
    if (b % 2 == 0) {
        ll p = power(a, b / 2);
        return p * p % mod;
    } else {
        ll p = power(a, (b - 1) / 2);
        return p * p % mod * a % mod;
    }
}

int main() {
    ll n, x;
    cin >> n >> x;
    ll s = 0;
    vector<ll> a(n);
    map<ll, int> cnt;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
    }
    for (int i = 0; i < n; ++i) {
        cnt[s - a[i]]++;
    }
    ll cur = s - a[n - 1];
    while (cur != s && cnt[cur] % x == 0) {
        if (cnt.find(cur + 1) == cnt.end()) {
            cnt[cur + 1] = 0;
        }
        cnt[cur + 1] += cnt[cur] / x;
        cur++;
    }
    cout << power(x, cur) << endl;
    return 0;
}