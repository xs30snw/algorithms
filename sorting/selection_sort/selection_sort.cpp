#include <iostream>

int main() {
    int n = 5;
    int a[n] = { 3, 1, 4, 1, 4 };

    for ( int i = 0; i < n; i++ ) {
        
        //  Find index of the smallest number among n-i elements starting from i
        int index_min = i;
        for ( int j = i+1; j < n; j++ )
            if ( a[index_min] > a[j] )
                index_min = j;
        
        //  If index of the smallest number is not i,
        //  exchange the number at index i for the smallest number
        if ( index_min != i ) {
            int temp = a[i];
            a[i] = a[index_min];
            a[index_min] = temp;
        }
    }

    for ( int i = 0; i < n; i++ )
        std::cout << a[i] << "\n";

    return 0;
}