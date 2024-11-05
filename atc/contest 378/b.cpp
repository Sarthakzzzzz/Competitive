#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int ,int>>gg(n);
    for (int i = 0; i < n; ++i) {
        int q,r;
        cin>>q>>r;
        gg[i]={q,r};
    }
    int Q;
    cin>>Q;
    for (int j = 0; j < Q; ++j) {
        int t,d;
        cin>>t>>d;
        --t;
        int iq = gg[t].first;
        int it = gg[t].second;
        if(d%iq == it){
            cout<<d<<endl;
        }else{
            int nxt = d+(it-d%iq+iq)%iq;
            cout<<nxt<<endl;
        }
    }
    return 0;
}
