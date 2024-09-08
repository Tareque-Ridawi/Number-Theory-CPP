#include <iostream>
using namespace std;

// Function to find and print prime factorization of a number
void primeFact(int n) {
    // Iterate from 2 to vn to find factors
    for (int i = 2; i * i <= n; i++) {
        // Check if i is a factor of n
        if (n % i == 0) {
            int count = 0;
            // Divide n by i until it's no longer divisible
            while (n % i == 0) {
                count++;
                n /= i;
            }
            // Print the prime factor and its count
            cout << i << "^" << count << ",";
        }
    }
    // If n is still greater than 1, it's a prime factor itself
    if (n > 1) 
        cout << n << "^1";
    cout << endl; // Print a newline
}

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the number to factorize
        primeFact(n);
    }
    return 0;
}
