#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;

// Define both prime and pfix arrays
bool prime[MAX];
int pfix[MAX];

// Sieve of Eratosthenes
void sieve() {
    // Set all numbers as prime
    memset(prime, true, sizeof(prime));
    // 0 and 1 are not prime
    prime[0] = prime[1] = false;
    // Iterate over all numbers
    for (int p = 2; p * p < MAX; p++)
        if (prime[p]) for (int i = p * p; i < MAX; i += p) prime[i] = false;
    // Calculate prefix sum of prime numbers
    for (int i = 2; i < MAX; i++) {pfix[i] = pfix[i - 1] + prime[i];}
}
