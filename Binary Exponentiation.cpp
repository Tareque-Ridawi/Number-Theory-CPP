#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Function to calculate (base^n) % mod using binary exponentiation
ll power(ll base, ll n, ll mod) {
    ll result = 1;
    while (n) {
        if (n % 2) result = (result * base) % mod, n--;  // If n is odd, multiply the result with base
        else base = (base * base) % mod, n /= 2;         // If n is even, square the base
    }
    return result;
}

int main() {
    ll t, n, m;
    cin >> t;  // Read number of test cases
    while (t--) {
        cin >> n >> m;  // Read values of n and m for each test case
        cout << power(n, m, 1e9) << '\n';  // Output result of (n^m) % 1e9
    }
    return 0;
}
