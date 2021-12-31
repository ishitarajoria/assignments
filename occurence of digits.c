
#include <stdio.h>
long long int OccurrenceOfdigit(long long int num)
{
int a[100]={0},rem,i;

while(num)
{
    rem=num%10;
    a[rem]=a[rem]+1;
    num=num/10;
}

printf("\n");

for(i=0;i<10;i++)
{

   if(a[i]!=0)
     printf("%d has appeared %d times\n",i,a[i]);
}

}

int main()
{  unsigned long long int n;
    printf("enter the no");
    scanf(" %llu",&n);
    OccurrenceOfdigit(n);
    
    return 0;
}
