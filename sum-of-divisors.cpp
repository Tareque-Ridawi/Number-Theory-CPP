#include <iostream>
using namespace std;

// Function to calculate the sum of divisors of numbers from 1 to n
int divisorSum(int n) {
    int sum = 0;

    // Iterate over each number from 1 to n
    for (int i = 1; i <= n; i++) {
        // Find divisors of i by iterating up to the square root of i
        for (int j = 1; j * j <= i; ++j) {
            if (i % j == 0) {
                if (i / j == j) // If divisors are the same, add only once
                    sum += j;
                else // Add both divisors
                    sum += j + (i / j);
            }
        }
    }
    return sum;
}

int main() {
    int t;
    cin >> t; // Read the number of test cases

    while (t--) {
        int n;
        cin >> n; // Read the value of n for each test case
        cout << divisorSum(n) << endl; // Output the sum of divisors
    }

    return 0;
}
