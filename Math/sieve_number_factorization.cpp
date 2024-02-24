#include <bits/stdc++.h>
#define MAX 1000001
using namespace std;

void sieveFactorization() {
    // smallest_prime[i] stores the smallest prime factor of i
    int smallest_prime[MAX];

    // Initialize the samllest prime factor of each number
    for (int i = 2; i < MAX; i++)
        // If i is prime, then the smallest prime factor of i is i, otherwise is the smallest prime factor of i
        smallest_prime[i] = (i % 2 == 0 ? 2 : i);

    // Iterate over all odd numbers
    for (int i = 3; i * i < MAX; i += 2)
        if (smallest_prime[i] == i)
            // Marks the smallest prime factor of all multiples of i as i, but only if it is the smallest prime factor
            for (int j = i * i; j < MAX; j += i)
                smallest_prime[j] = min(smallest_prime[j], smallest_prime[i]);
}
