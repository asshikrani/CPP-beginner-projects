#include <iostream>
using namespace std;


int factorial(int n) {
    int res = 1; 
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}
int nCr(int n, int r) {
    int facN = factorial(n);
    int facR = factorial(r);
    int facNMR = factorial(n-r);

    return  facN / (facR * facNMR);;
}


int main() {
    int n = 5, r = 3;
    cout << nCr(n, r) << endl;
    return 0;
}