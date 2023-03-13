#include "mbed.h"

// define serial connection to PC
Serial pc(USBTX, USBRX);

int fibonacci(int n);

// create the loop for n, in this case up to 10 sequence numbers
// And print them to the emulator
int main() {
    pc.printf("Fibonacci Numbers Using Recursive Function:\r\n");
    for (int n = 1; n <= 10; ++n) {
        int fib = fibonacci(n);
        pc.printf("%d ", fib);
    }
    pc.printf("\r\n");
    return 0;
}

// create the Fibonacci function itself using recursive function
int fibonacci(int n) {
    static int i = 0, j = 1, k = 0, fib = 0;
    if (n == 1) {
        fib = i;
    }
    else if (n == 2) {
        fib = j;
    }
    else {
        k++;
        fib = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return fib;
}
