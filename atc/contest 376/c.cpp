//
// Created by HP on 19-10-2024.
//
#include "bits/stdc++.h"
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> B(N-1);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N-1; ++i) {
        cin >> B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int low = 1, high = 1e9, answer = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        vector<int> boxes = B;
        boxes.push_back(mid);

        sort(boxes.begin(), boxes.end());

        bool possible = true;
        for (int i = 0; i < N; ++i) {
            if (A[i] > boxes[i]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            answer = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << answer << endl;

    return 0;
}
