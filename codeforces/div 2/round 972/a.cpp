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
string m = "aeiou";
int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
    in t,n;cin>>t;
    while(t--){
        cin>>n;
        string s;
        while(size(s)<n) s+=m;
        s.resize(n);
        sort(s.begin(),s.end());
        cout<<s<<endl;
    }
}