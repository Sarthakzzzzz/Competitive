#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  unordered_map<char,int> pos;
  for(int i = 0;i<26;i++) pos[s[i]]=i+1;
  int dis = 0;
  int curr = pos['A'];
  for(char c ='B';c<='Z';c++){
    int nxt = pos[c];
    dis += abs(nxt-curr);
    curr = nxt;
  }
  cout<<dis<<endl;
  return 0;
}