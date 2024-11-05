#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> K(n);
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> K[i];
        total += K[i];
    }
    int mm = total;
    for(int i = 0; i < (1 << n); i++){
        int ga = 0, gb = 0;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)) ga += K[j];
            else gb += K[j];
        }
        int curr = max(ga, gb);
        mm = min(mm, curr);
    }
    cout << mm << '\n';
    return 0;
}
