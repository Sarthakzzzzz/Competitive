#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    if (s.length() >= 3 && s.substr(s.length() - 3) == "san") {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}