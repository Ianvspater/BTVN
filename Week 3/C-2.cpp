#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    if ( str == string(str.rbegin(), str.rend())) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
