challenge=  https://www.hackerrank.com/challenges/2d-array/
This really took some time to solve and basically what i did earlier was a very basic mistake. I was going to give at last.
But yeah finally did it. 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned int arr[6][6];
    for(int i=0;i<6;i++)
        {
            for(int j=0;j<6;j++)
            {
                cin>>arr[i][j];
            }
        }
     int sum;int temp=0;int big;int r=0;int p[16];
    for(int i=1;i<5;i++)
        {    sum=0; 
            for(int j=1;j<5;j++)
            {
sum+= arr[i][j]+arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1]+arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
             
              //cout<<sum<<" "; 
            
             if(i==1&&j==1)
             {    
                 //cout<<sum<<" ";
             
                 p[r]=sum;
                 r++;   
             }
                 
               
         else        
                 {              
                // cout<<sum-temp<<" ";
         
                   p[r]=sum-temp;
                   r++;
               
               // else {
                 //   cout<<temp-sum<<" ";
                  //   p[r]=temp-sum;
                  //  r++;
                }
              
            sum=temp;     
            }   
            }
  big=p[0];
    for(int i=1;i<16;i++)
    {  
    if(p[i]>big)
        big=p[i];
    }
    cout<<big;   
 return 0;
}
