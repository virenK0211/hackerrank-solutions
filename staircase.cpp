https://www.hackerrank.com/challenges/staircase/problem
   #
  ##
 ###
####


#include <bits/stdc++.h>

using namespace std;
int main()
{   int n;
 cin>>n;
 for(int i=0;i<n;i++)
 {   for(int j=i;j<n-1;j++) 
 {cout<<" ";
 }
  for(int y=0;y<=i;y++)
  {
      cout<<"#";
     
  }
  cout<<"\n";
 }

    return 0;
}
