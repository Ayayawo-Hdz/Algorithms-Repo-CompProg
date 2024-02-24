#include "bits/stdc++.h"
using namespace std;

// Bitmasks are represented from 30 to 62 bits using signed int and signed long long int to avoid problems with two's complement
int main() {
	signed int a, b;

	// To multiply a number by two, just apply a left shift
	a = 1;
	a= a << 3;

	// To divide a number by two, just apply a right shift
	a = 32;
	a = a >> 3;
	
    // To turn on the n-th bit of a number, just apply a bitwise OR with 2^(n-1), turns on the third bit
	a = 1;
	b = 1 << 2; 
	a = a | b;

	// To turn off the n-th bit of a number, just apply a bitwise AND with the complement of ~2^(n-1), turns off the third bit
	a = 5;
	b = 1 << 2;
	a &= ~b;
	
    // To check if the n-th bit of a number is on, just apply a bitwise AND with 2^(n-1) and check if the result is turned on
	a = 5;
	b = 1 << 2;
	a = a & b;
	cout << (a ? "YES" : "NO") << endl;
	
    // To reverse the n-th bit of a number, just power the n-th bit with 2^(n-1)
	a = 5;
	b = 1 << 2;
	a = a ^ b;
	
    // To obtain the least significant bit of a number that is turned on, just apply a bitwise AND with the complement of the number and add one
	a = 12;
    log2(a & ((-1) * a)) + 1
	
    // To turn on all bits of a number
	a = (1<<4)-1;
}