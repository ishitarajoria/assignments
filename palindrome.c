#include <stdio.h>
#include <string.h>

int main() {
    char arr[50];
    int i;
    int l;
    int flag=0;
    printf("enter the characters");
    gets(arr);
    l= strlen(arr);
    for(i=0;i<l/2;i++)
    {
        if(arr[i]!=arr[l-1-i])
          flag=1;
          break;
            
            
    }        
    if(flag==0)
        printf("palindrome");
    else
        printf("not");
   
    
    
    
   return 0;
}