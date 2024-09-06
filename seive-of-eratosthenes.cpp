#include<iostream>
#include<cstring>
using namespace std;

// Sieve of Eratosthenes to print all prime numbers <= n
void sieve(int n) {
    bool primes[n+1] = {0};  // Initialize all as false (prime)
    for(int i = 2; i * i <= n; i++) {
        if(!primes[i]) {  // If i is prime
            for(int j = i * i; j <= n; j += i) 
                primes[j] = true;  // Mark multiples of i as non-prime
        }
    }
    for(int i = 2; i <= n; i++) 
        if(!primes[i]) cout << i << " ";  // Print primes
}

int main() {
    int n;
    cin >> n;
    sieve(n);  // Call sieve function
}
