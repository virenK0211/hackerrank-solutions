#challenge link=https://www.hackerrank.com/challenges/a-very-big-sum/problem

#include <bits/stdc++.h>
using namespace std;
int main()
   { long long int i;
    int ar[100];
    
    cin>>i;
    for(int z=0;z<i;z++)
    {
        cin>>ar[z];
    }
    long long int sum=0;
    for(int x=0;x<i;x++)
    {
        sum+=ar[x];
    }
    cout<<sum;
    
    return 0;
}


