challenge=https://www.hackerrank.com/challenges/variable-sized-arrays/problem
que was not worded good . Had to peek to the discussions.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> vec;
    for (int i = 0; i < n; ++i) {
        cin >> size;
        vector<int> r;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            r.push_back(value);
        }
        vec.push_back(r);
    }
    for (int k = 0; k < q; ++k) {
        cin >> which >> index;
        cout << vec[which][index] << endl;
    }
    return 0;
}
 
