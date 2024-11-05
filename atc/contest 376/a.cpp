//
// Created by sarthakzzzzzz on 19-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
int main() {

    int N, C;
    cin >> N >> C;
    vector<int> T(N);
    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }
    int candies = 1;
    int count = T[0];
    for (int i = 1; i < N; i++) {
        if (T[i] - count >= C) {
            candies++;
            count = T[i];
        }
    }
    cout << candies << endl;
    return 0;
}