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
vi count(int N, const vi & heights) {  
    vi c(N, 0); 
    stack<int> s; 
    for (int i = N - 1; i >= 0; --i) {  
        while (!s.empty() && heights[s.top()] <= heights[i]) {  
            s.pop();  
        }  
        c[i] = s.size();  
        s.push(i);  
    }  
    return c;  
}  
int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0); 
    int N;  
    cin >> N;
    vi H(N);  
    for (int i = 0; i < N; ++i) {  
        cin >> H[i];  
    }  
    vi result = count(N,H);  
    for (int i = 0; i < N; ++i) {  
        cout << result[i] << (i == N - 1 ? "" : " ");
    }  
    cout << endl;  
    return 0;  
}