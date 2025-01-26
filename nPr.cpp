#include <iostream>
using namespace std;

int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int nPr(int n, int r) {
    int facN = factorial(n);
    int facNMR = factorial(n-r);

    return facN / facNMR;
}

int main() {
    int n = 5, r = 3;
    cout << nPr(n, r) << endl;
    return 0;
}