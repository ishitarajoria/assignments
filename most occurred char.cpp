#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  int i,j;
  int temp=0, max_count=0;
  char str[100];
  char maxchar;

  cout<<"enter the string:";
  cin>>str;
  
  for(i=0;i<strlen(str);i++)
  {
    temp=0;
    for(j=0;j<strlen(str);j++)
    {
      if(str[i]==str[j])
           temp++;

    }
    
    if(max_count<temp)
      {
        max_count=temp;
        maxchar=str[i];
      }
 }
  
  cout<<"the largest occuring character in string is:"<<maxchar;
      
  return 0;

}

}