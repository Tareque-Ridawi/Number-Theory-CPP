#include <iostream>
#include <vector>
using namespace std;

const int N = 90000000;  // Upper limit for sieve
bool primes[N+1];  // Boolean array for marking primes
vector<int> allPrimes;  // Vector to store all prime numbers

// Sieve of Eratosthenes to mark non-primes and collect primes
void sieve() {
    for(int i = 2; i * i <= N; i++) {
        if(!primes[i]) {  // If i is prime
            for(int j = i * i; j <= N; j += i) 
                primes[j] = true;  // Mark multiples of i as non-prime
        }
    }
    for(int i = 2; i <= N; i++) 
        if(!primes[i]) allPrimes.push_back(i);  // Collect all primes
}

int main() {
    sieve();  // Precompute primes up to N
    int t;
    cin >> t;  // Number of test cases
    while(t--) {
        int n;
        cin >> n;  // Query for the n-th prime
        cout << allPrimes[n-1] << endl;  // Output the n-th prime (0-indexed)
    }
}
