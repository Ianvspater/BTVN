#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand (time(NULL));
    int a[30], n;
    for ( int i = 1; i <= 30; i++ ) {
        a[i] = rand()%100 + 1;
        cout << a[i] << " ";
    }
    cout << endl;
    for ( int i = 1; i <= 30; i++ ) {
        for ( int j = 1; j <= 30 - i; j++ ) {
            if ( a[j] > a[j+1] ) {
                n = a[j];
                a[j] = a[j+1];
                a[j+1] = n;
            }
        }
    }
    for ( int i = 1; i <= 30; i++ ) {
        cout << a[i] << " ";
    }
}
