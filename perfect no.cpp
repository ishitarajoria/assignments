#include<iostream>
using namespace std;
int main()
{
 int n,i=1,sum=0;
 cout<<"enter the no";
 cin>>n;
 
 while(i<n)
 {
   if(n%i==0)
    sum=sum+i;
    i++;
 }
 
 if(sum==n)
    cout<<i<<"is a perfect no";
 else
    cout<<i<<"is not a perfect no";
return 0;
}