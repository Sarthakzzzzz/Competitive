#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
  long long int N;
  cin>>N;
  vector<ll> A(N);vector<ll>B(N);
  for(ll i = 0;i<N;i++) cin>>A[i];
  for(ll i = 0;i<N;i++)cin>>B[i];
  cout<<(*max_element(A.begin(), A.end())+*max_element(B.begin(), B.end()))<<endl;
  return 0;
}