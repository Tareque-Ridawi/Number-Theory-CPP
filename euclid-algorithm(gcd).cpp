#include <iostream>
using namespace std;

// Function to calculate GCD using the Euclidean algorithm
int gcd(int a, int b) {
    // Base case: if b is 0, return a as the GCD
    if (!b) return a;
    // Recursive call: GCD of b and the remainder of a divided by b
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t; // Read the number of test cases

    // Iterate over each test case
    while (t--) {
        int a, b;
        cin >> a >> b; // Read the two integers
        int ans = gcd(a, b); // Calculate their GCD
        cout << ans << endl; // Output the GCD
    }

    return 0;
}
