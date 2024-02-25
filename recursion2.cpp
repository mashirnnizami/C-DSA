#include <iostream>

using namespace std;

// Function prototype declaration
int power(int n);

int main() {
    int n;
    cout << "Enter the number n:";
    cin >> n;
    int ans = power(n);
    cout << "The power of " << n << " :";
    cout << ans << endl;
    return 0;
}

int power(int n) {
    if (n == 0) {
        return 1;
    }
    return n ^ power(n - 1); // Change ^ to * for exponentiation
}
