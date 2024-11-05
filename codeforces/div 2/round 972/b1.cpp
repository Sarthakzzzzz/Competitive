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
void sarthakzzzzz(){
 return;   
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sarthakzzzzz();
    ll t;
    cin>>t;
    while (t--)
    {
        ll t1,t2,d;
        cin>>t1>>t2>>d;
        vi a(t2);
        for(int i = 0;i<t2;i++) cin>>a[i];
        sort(a.begin(),a.end());
        while(d--){
            ll curr;
            cin>>curr;
            if(curr<a[0]){
                cout<<a[0]-1<<endl;continue;
            }
            if(curr>a[1]){
                cout<<t1-a[1]<<endl;continue;
            }
            const ll mid = (a[0]+a[1])/2;
            const ll u = mid - a[0],k = a[1]-mid;
            cout<<min(u,k)<<endl;
        }
    }
    return 0;
}