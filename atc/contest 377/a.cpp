//
// Created by sarthakzzzzz on 26-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
const int MAX = 1e9 + 17;
typedef vector<int> vi;
int main() {
    string S;
    cin >> S;
    sort(S.begin(), S.end());

    if (S == "ABC") {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

