#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
void solve(){
    vector<int>count(5,0);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    count[a]++;
    count[b]++;
    count[c]++;
    count[d]++;
    int tt =0;
    for (int i = 1; i <=4 ; ++i) {
        tt+=count[i]/2;
    }
    cout<<tt<<'\n';
}
int main(){
        solve();
    return 0;
}