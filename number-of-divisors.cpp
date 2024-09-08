#include <iostream>
#include <set>
#include <cmath> // Use <cmath> for math functions like sqrt
using namespace std;

// Function to find all unique divisors of n and store them in the set
void divisorCounter(int n, set<int>& s) {
    // Iterate from 1 to vn to find divisors
    for (int i = 1; i <= sqrt(n); i++) {
        // If i is a divisor of n
        if (n % i == 0) {
            s.insert(i);        // Insert the divisor
            s.insert(n / i);    // Insert the corresponding paired divisor
        }
    }
}

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the number to find divisors for
        set<int> s; // Declare the set inside the loop to clear it automatically for each test case
        divisorCounter(n, s);
        cout << s.size() << endl; // Print the number of unique divisors
        for (auto i : s) {
            cout << i << " "; // Print each divisor
        }
        cout << endl;
    }
    return 0;
}
