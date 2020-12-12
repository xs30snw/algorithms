#include <iostream>

int main() {
    int n = 5;
    int a[n] = { 3, 1, 4, 1, 4 };

    int h = 3;

    for ( int gap = n/h; gap > 0; gap /= h ) {

        for ( int i = gap; i < n; i++ ) {
            
            // save a[i] in temp and make a hole at position i
            int temp = a[i];

            int j;
            for ( j = i; j >= gap && a[j-gap] > temp; j-=gap ) {
                a[j] = a[j-gap];
            }
            a[j] = temp;
        }
    }

    for ( int i = 0; i < n; i++ )
        std::cout << a[i] << "\n";

    return 0;
}