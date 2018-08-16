#que https://www.hackerrank.com/challenges/30-binary-numbers/problem

It was a bit time consuming as I didn't know bit operations

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num; cin >> num;
    int counter = 0, maxCounter = 0;
    
    while (num)
    {
        const auto rem = num % 2;        
        counter = (counter + rem) * rem;
        maxCounter = max(counter, maxCounter);        
        num >>= 1;
    }
    
    cout << maxCounter << endl;
        
    return 0;
}
