void modArithmetic (int a, int b, int x) {
    // If the result of adding a and b is greater than x, take the remainder of the division by x
    (a + b) % x;
    // If the result of subtracting a and b is less than 0, add x to the result and take the modulus again
    (a - b %x + x) % x;
    // If the result of multiplying a and b is greater than x, take the remainder of the division by x
    (a * b) % x;
}