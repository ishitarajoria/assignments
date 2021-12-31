

#include <iostream>
using namespace std;
 
string one[] = { "", "one ", "two ", "three ", "four ",
                 "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven ", "twelve ",
                 "thirteen ", "fourteen ", "fifteen ",
                 "sixteen ", "seventeen ", "eighteen ",
                 "nineteen " };
 
string tens_multiple[] = { "", "", "twenty ", "thirty ", "forty ",
                 "fifty ", "sixty ", "seventy ", "eighty ",
                 "ninety " };
 

string num_To_words(int n, string s)
{
    string a = "";
        if (n>99)
        a += one[n/100] + "hundred " + tens_multiple[(n%100)/10] + one[n%10];
        else if (n > 19)
            a += tens_multiple[n / 10] + one[n % 10];
       else
          a += one[n];
 
  if (n)
        a += s;
 
    return a;
}
 

string convert_To_words(unsigned long n)
{
    string result;
 
    result += num_To_words((n / 1000000000UL), "billion, ");
    
    result += num_To_words(((n / 1000000UL) % 1000UL), "million, ");

    result += num_To_words(((n / 1000UL) % 1000UL), "thousand, ");

    result += num_To_words(((n / 100UL) % 10UL), "hundred ");
 
    if (n > 100 && n % 100)
    result += "and ";
    result += num_To_words((n % 100UL), ".");
 
    return result;
}
 

int main()
{
   
    unsigned long n;
 
    cout << "Enter the number" << endl;
    cin >> n;
    cout << convert_To_words(n) << endl;
 
    return 0;
}
