#include <iostream>
using namespace std;

int main() {
    // phan a.
    string s1;
    for ( int i = 0; i < s1.size(); i++ ) {
        cout << s1[i] << endl;
    }
    cout << s1 << endl;
    // phan b.
    string s2 = "abcd";
    for ( int i = 0; i < s2.size(); i++ ) {
        cout << s2[i] << endl;
    }
    cout << s2;
}
