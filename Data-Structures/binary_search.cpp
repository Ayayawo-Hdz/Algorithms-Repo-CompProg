#include <bits/stdc++.h>
using namespace std;

vector<int> vec;

int binary_search_first_occurrence(const vector<int>& vec, int value) {
    // Binary search algorithm finds the first occurrence of a value in a sorted vector
    // Declare left and right pointers
    int left = 0;
    int right = vec.size() - 1;
    int result = -1;
    // While left and right pointers do not cross, keep searching
    while (left <= right) {
        // Calculate the middle element of the vector
        int mid = left + (right - left) / 2;
        // If the middle element is the value we are looking for, return its index
        if (vec[mid] == value) {
            result = mid;
            // left = mid + 1;  // Continue searching in the right half (for last occurrence)
            right = mid - 1;  // Continue searching in the left half
        // If the middle element is smaller than the value we are looking for, search in the right half
        } else if (vec[mid] < value) {
            left = mid + 1;
        // If the middle element is greater than the value we are looking for, search in the left half
        } else {
            right = mid - 1;
        }
    }
    return result;  // Returns -1 if value is not found
}

int main() {
    // Assign the variable value to the value you want to search
    int elements, value = 0;
    cin >> elements;
    // Read the elements of the vector
    for (int i = 0; i < elements; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    cout << binary_search_first_occurrence(vec, value);

    return 0;
}