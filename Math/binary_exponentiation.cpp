#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll inf = 10000000007;

ll bitPow(ll a, ll e) {
    ll res = 1;
    a %= inf;

    // while exponent is greater than zero
    while (e > 0) {
        // if exponent is odd, multiply result by base
        if (e & 1) 
            // multiply result by base and take the remainder
            res = (res * a) % inf;
        // square the base and take the remainder
        a = (a * a) % inf;
        // divide the exponent by 2
        e >>= 1;
    }

    return res;
}
