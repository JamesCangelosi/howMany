#include <iostream>
#include <
using namespace std;

int fib(int n) {
    if(n<=1) return n;
    else return fib(n-1) + fib(n-2);
}

int fibCalls(int n, int base) {
    if(n<=1) return 1;
    else return (1+ fibCalls(n-1, base) + fibCalls(n-2, base))%base;
}

int main() {

}