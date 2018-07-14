#include <bits/stdc++.h>
using namespace std;
void summe() 
{int a[3];int b[3];
 for(int x=0;x<3;x++)
     cin>>a[x];
 for(int y=0;y<3;y++)
     cin>>b[y];
 
    
    int al=0;int bo=0;
    for(int i=0;i<3;i++)
{
    if(a[i]>b[i])
        al++;
        else if(a[i]<b[i])
            bo++;  
        
} 
    int ar[2];
    ar[0]=al;ar[1]=bo;
cout<<ar[0]<<" "<<ar[1];
}

int main()
{  
    summe();
 
 
    return 0;
}
