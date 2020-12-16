#include <cstdio>

int factorial(int n) {
    if ( n > 1 )
        return n * factorial ( n - 1 ); // Recursive case
    else
        return 1;   // Base case
}

int main() {

    int n = 5;

    printf( "%d\n", factorial(n) );

    return 0;
}