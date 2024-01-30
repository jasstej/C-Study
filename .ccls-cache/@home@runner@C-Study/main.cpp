#include <iostream>
using namespace std;

void fibonacci(int n) {
    int n1 = 0, n2 = 1, nextTerm;
    for (int i = 1; i <= n; ++i) {
        cout << n1 << ", ";
        nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
}

int main() {
    int n;
    cout << "Enter the number of terms for Fibonacci series: ";
    cin >> n;
    cout << "Fibonacci Series: ";
    fibonacci(n);
    return 0;
}
