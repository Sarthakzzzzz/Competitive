//
// Created by sarthakzzzzz on 12-10-2024.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<vector<char>> A(N, vector<char>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    vector<vector<char>> B(N, vector<char>(N));
    for (int i = 0; i < N / 2; i++) {
        for (int j = i; j < N - i - 1; j++) {
            B[i][j] = A[N - j - 1][i];
            B[j][N - i - 1] = A[N - i - 1][N - j - 1];
            B[N - i - 1][N - j - 1] = A[j][N - i - 1];
            B[N - j - 1][i] = A[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << B[i][j];
        }
        cout << endl;
    }

    return 0;
}