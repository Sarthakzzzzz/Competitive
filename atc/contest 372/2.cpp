/* For any id use : sarthakzzzzz*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define in int
typedef int point[];
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define sq(a) a*a
in countABC(const string &s, in idx) {
    if (idx >= 0 && idx + 2 < s.size()) {
        if (s.substr(idx, 3) == "ABC") return 1;
    }
    return 0;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    in n,q;cin>>n>> q;
    string s;cin>>s;
    in count = 0;
    for (in i = 0; i + 2 < n; ++i) 
        if (s.substr(i, 3) == "ABC") count++;
    for (int i = 0; i < q; ++i) {
        int r;char c;cin>>r>>c;
        r--;
        for (in j = r - 2; j <= r; ++j) 
            if (j >= 0 && j + 2 < n) count -= countABC(s, j);
        s[r]=c;
        for (in j = r-2; j<=r;++j) {
            if (j>= 0 && j+2 < n) count += countABC(s, j);
        }
        cout<<count<<endl;
    }
    return 0;
}
