#include <iostream>
using namespace std;

int main() {
       int i, j, k, sum=0, row1, col1, row2, col2;
       int a[20][20], b[20][20], res[20][20];
       cout<<"enter the rows and columns for first matrix:";
       cin>>row1>>col1;
       cout<<"enter the rows and columns for second matrix:";
       cin>>row2>>col2;
       
       while(col1!=row2)
       {
           cout<<"enter row and columns of 1st matrix again";
           cin>>row1>>col2;
           cout<<"enter the rows and columns for second matrix again";
           cin>>row2>>col2;
           
       }
       cout<<endl<<"enter the elements of first matrix"<<endl;
       for(i=0;i<row1;i++)
          for(j=0;j<col1;j++)
          {
              cin>>a[i][j];
          }      
          
       cout<<endl<<"enter the elements of second matrix"<<endl;
        for(i=0;i<row2;i++)
          for(j=0;j<col2;j++)
          {
              cin>>b[i][j];
          }
        for(i=0;i<=row1;i++)
           
           for(j=0;j<col2;j++)
           {
             
               sum=0;
           
             for(k=0;k<col1;k++)
                sum=sum+a[i][k]*b[k][j];
                res[i][j]=sum;
           }
          cout<<"the resultant matrix is"<<"\n";
        for(i=0;i<row1;i++)
         {
           for(j=0;j<col2;j++)
           cout<<res[i][j]<<" ";
           cout<<"\n";
         }  

    return 0;
}