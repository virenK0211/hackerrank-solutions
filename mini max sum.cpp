WAS A BIT FRUSTRATING AS WE HAD TO USE INT_MAX AND THEN SUBTRACT IT. TOOK TIME TO SOLVE
LINK  https://www.hackerrank.com/challenges/mini-max-sum/problem

#include<bits/stdc++.h>

using namespace std;

int main(){
  int inp; int largest=0;int smallest=INT_MAX;
  unsigned sum=0;
  
  for(int i = 0; i<5; i++){
    cin>>inp;
       sum+=inp;
    if(inp>largest) 
        largest = inp;
    if(inp<smallest) 
        smallest = inp;
   
  }
  
  cout<<sum-largest<<" "<<sum-smallest;
    return 0;
}
