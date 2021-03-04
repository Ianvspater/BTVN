#include <iostream>

using namespace std;

int main() {
    int n, i, j;
    cin >> n;
    for ( i = n; i >= 0; i-- ) {
        for ( j = i; j <= n - 1; j++ ){
            cout << " ";
        }
        for ( j = 1; j <= i*2 - 1; j++ ) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
