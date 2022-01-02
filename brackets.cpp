

#include <iostream>
#include <stack>
using namespace std;

bool balancedbrackets(string expr)
{
   stack<char> st;
   char c;
   int i;

   for(i=0;i<expr.length();i++)
   {
      if(expr[i]=='(' || expr[i]== '[' || expr[i]== '{')
      {
         st.push(expr[i]);
         continue;
      }
      
      if(st.empty())
         return false;
      switch(expr[i]) {
          case ')':
             c= st.top();
             st.pop();
             if (c!= '(')
                return false;
             break;
          case '}':
              c=st.top();
              st.pop();
              if (c!='{')
                return false;
              break;
         case ']':
              c=st.top();
              st.pop();
              if(c!='[')
                 return false;
                 break;
         }
        }
        return(st.empty());
}

int main()
{   string expression;
    cout<<"enter the brackets:";
    cin>>expression;
    if(balancedbrackets(expression))
    
      cout<<"the expression is balanced";
   else
      cout<<"the expression is not balanced";


 }
         
 