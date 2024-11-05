//
// Created by sarthakzzzzz on 26-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const int MAX = 1e9 + 17;
typedef vector<int> vi;
int main() {
    vector<string> grid(8);
    for(auto &a:grid) cin>>a;
    bool row[8] = {false};
    bool col[8] = {false};
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if(grid[i][j]=='#'){
                row[i]=true;
                col[j]=true;
            }
        }
    }
    int res = 0;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if(grid[i][j]=='.' && !row[i] && !col[j]) res++;
        }
    }
    cout<<res<<'\n';
    return 0;
}


