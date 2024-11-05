//
// Created by sarthakzzzzz on 12-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
#define ll long long
int main() {
    string S;
    cin >> S;
    int n = S.size();
    unordered_map<char, int> left, right;
    for (char c : S) {
        right[c]++;
    }
    long long result = 0;
    for (int j = 0; j < n; j++) {
        char middle_char = S[j];
        right[middle_char]--;
        for (auto &pair : left) {
            char c = pair.first;
            result += (long long)pair.second * right[c];
        }
        left[middle_char]++;
    }
    cout << result << endl;
    return 0;
}