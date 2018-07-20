My approach was a bit weird. I used bruteforce as the no. of jump must be same for both. EXtensive use of exit(0);
Challenge-https://www.hackerrank.com/challenges/kangaroo

#include<bits/stdc++.h>
using namespace std;
int main()
{   long int x1,v1,x2,v2;
 cin>>x1>>v1>>x2>>v2;
 if(x2>x1&&v2>v1)
 { cout<<"NO";
exit(0);
 }
 long int s1=x1;long int s2=x2;
for( long int i=1;i<=10000;i++)
{   s1=s1+v1;
    s2=s2+v2;

  if(s1==s2)
  {cout<<"YES";
 exit(0);
  }
 } 
 cout<<"NO"; 
    return 0;
}
