#include <iostream>

int main() {
    int n = 5;
    int a[n] = { 3, 1, 4, 1, 4 };

    for ( int i = 1; i < n; i++ ) {
        
        for ( int j = i; j > 0 && a[j-1] > a[j]; j-- ) {
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
        }
    }

    for ( int i = 0; i < n; i++ )
        std::cout << a[i] << "\n";

    return 0;
}