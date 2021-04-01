#include <iostream>
using namespace std;

int main(){
    int n, a[100], minnum, maxnum;
    int sum = 0, oddnum = 0;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> a[i];
    }
    for ( int i = 0; i < n; i++ ) {
        if ( a[i] % 2 == 0 ) {
            sum += a[i];
        }
        else {
            oddnum ++;
        }
    }
    minnum = a[0];
    for ( int i = 0; i < n; i++ ) {
        if ( a[i] < minnum ) {
            minnum = a[i];
        }
    }
    maxnum = a[0];
    for ( int i = 0; i < n; i++ ) {
        if ( maxnum < a[i] ) {
            maxnum = a[i];
        }
    }
    cout << sum << endl;
    cout << oddnum << endl;
    cout << minnum << endl << maxnum;
}


