#include "bits/stdc++.h"
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool yes = true;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n - 1; ++i) {
            int count = abs(a[i] - a[i + 1]);
            if (count != 5 && count != 7) {
                yes = false;
                break;
            }
        }

        if(yes){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
