#include <bits/stdc++.h> 
using namespace std;

int gcdExtended(int a, int b, int& x, int& y) {
    // Base Case
    if (b == 0) { 
        x = 1; 
        y = 0; 
        return a; 
    } 
    
    int x1, y1;
    int gcd = gcdExtended(b%a, a, &x1, &y1); 
 
    x = y1;
    y = x1 - y1 * (a / b);
 
    return gcd; 
}