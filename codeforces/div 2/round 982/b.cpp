#include "bits/stdc++.h"
using namespace std;
typedef long long  ll;
void stalin(vector<int> &arr,int  n){
    int k = n;
    for (int i = 0; i < n; ++i) {
        int count = i;
            for (int j = i+1; j < n; ++j) {
                if(arr[j]>arr[i]) count++;
            }
                k = min(k,count);
    }
        cout<<k<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &a: arr) cin >> a;
        stalin(arr,n);
    }
    return 0;
}