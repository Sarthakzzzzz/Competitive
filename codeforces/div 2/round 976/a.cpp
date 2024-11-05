/* For any id use : sarthakzzzzz*/
/* it`s not gpt generated*/
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
in t;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
        int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ans = 0;
        if(k==1){
cout<<n<<endl;
continue;
}
        while (n) {
            ans += n % k;
            n /= k; 
        }
        cout << ans << endl; 
    }
 
    return 0;
}
