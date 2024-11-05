#include "bits/stdc++.h"
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    if (n == 1) {
        cout << 1 << '\n';
        cout << "1\n";
        return;
    }
    if (k == n) {
        cout << -1 << '\n';
        return;
    }
    if(k==1){
        cout<<-1<<'\n';
        return;
    }
    if(k%2==0){
        cout<<3<<'\n';
        cout<<1<<" "<<k<<" "<<k+1<<'\n';
        return;
    }
        cout << 5 <<'\n';
        cout<<1<<" "<<2<<" "<<k<<" "<<k+1<<" "<<n<<'\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}