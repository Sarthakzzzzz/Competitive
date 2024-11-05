//
// Created by sarthakzzzzz on 28-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main() {
    int t;
    cin>>t;
    vector<string>res;
    while(t--) {
        int x, y, k;
        cin >> x >> y >> k;
        int len = min(x, y);
        int Ax = 0, Ay = 0;
        int Bx = len, By = len;
        int Cx = 0, Cy =len;
        int Dx = len, Dy = 0;
        cout<<Ax<<" "<<Ay<<" "<<Bx<<" "<<By<<" "<<'\n';
        cout<<Cx<<" "<<Cy<<" "<<Dx<<" "<<Dy<<" "<<'\n';
    }
    return 0;
}
