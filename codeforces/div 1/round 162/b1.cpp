//
// Created by sarthakzzzzz on 21-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
const int MAX  = 1e5+15;
int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    vi A(n);
    int dp[MAX];
    int res = 1;
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
        int maxRes = 1;
        for (int j = 2; j * j <= A[i]; ++j) {
            if (A[i] % j ) continue;
                    maxRes = max(maxRes, dp[j] + 1);
                    maxRes = max(maxRes, dp[A[i] / j] + 1);

        }
        for (int j = 2; j*j <=A[i] ; ++j) if(A[i]%j == 0) dp[j] = dp[A[i]/j] = maxRes;
        dp[A[i]] = maxRes;
        res = max(res, maxRes);
    }
    cout <<res<<'\n';
    return 0;
}