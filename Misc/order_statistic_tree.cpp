#include "bits/stdc++.h"
#include <bits/extc++.h>
using namespace __gnu_pbds;
using namespace std;
// Defines a new type which is an Order Statistic Tree where each node stores a pair of integers, ordered by the pair in ascending order.
typedef tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> ost;
using namespace std;

int main(){
    // Creates an instance of OST named tree
    ost tree;
    // Inserts 5 elements, each one with a different id
    int n = 5;
    for(int id = 1; id <= n; id++)
        // Inserts a pair with the value and the id
        for(int val = 0; val < n; val++)
            tree.insert({val,id});
    // Returns the smallest value, in case of a tie it returns the smallest id
    cout << (*tree.find_by_order(0)).first << " " << (*tree.find_by_order(0)).second << endl;
    // Returns the index (0 indexed) of the first ocurrence of .first
    cout << tree.order_of_key({1,-1}) << endl;
}