#include <iostream>
using namespace std;

int main(){
    int n, a[100], s = 0;
    double mean, var;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> a[i];
        s = s + a[i];
    }
    mean = (double)s/n;
    for ( int j = 0; j < n; j++ ) {
        var += (double)(a[j] - mean )*(a[j] - mean )/(n-1);
    }
    cout << "Trung binh cua day so la " << mean << "." << endl;
    cout << "Phuong sai la " << var << ".";
}

