Learned about using setw() and setfill()

challenge=https://www.hackerrank.com/challenges/time-conversion/problem

#include <bits/stdc++.h>
#include <iomanip>  
using namespace std;

int main(){
    int h, m, s;
    char ch, indi;//indicator
    
    cin >> h >> ch >> m >> ch >> s >> indi >> ch;
    h = (indi== 'A') ? (h==12 ? 0 : h) : (h==12 ? 12 : h+12);
        
    cout <<setw(2)<<setfill('0')<< h << ":"<<setw(2)<<setfill('0')<< m << ":"<<setw(2)<<setfill('0')<< s;
    
    return 0;
}
