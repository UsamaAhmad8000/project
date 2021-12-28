#include <iostream> 
using namespace std; 
  
string one[] = { "", "one ", "two ", "three ", "four ", 
                 "five ", "six ", "seven ", "eight ", 
                 "nine ", "ten ", "eleven ", "twelve ", 
                 "thirteen ", "fourteen ", "fifteen ", 
                 "sixteen ", "seventeen ", "eighteen ", 
                 "nineteen “}; 
  

string ten[] = { "", "", "twenty - ", "thirty - ", "forty - ", 
                 "fifty - ", "sixty - ", "seventy - ", "eighty - ", 
                 "ninety - “}; 

  
string hundred[]={"", "hundred ", "two hundred ", "three hundred ",
                 "four hundred ", "five hundred ", "six hundred ", 
                 "seven hundred ", "eight hundred ", "nine hundred "};

 
string numToWords(int n, string s) 
{ 
    string str = ""; 
    
    
    if (n>99)
    str += hundred[n / 100] + ten[n %100] ;
    
    else if (n > 19) 
        str += ten[n / 10] + one[n % 10]; 
    else
        str += one[n]; 
  
    
    if (n) 
        str += s; 
  
    return str; 
} 
  
 
string convertToWords(long n) 
{ 
    
    string out; 
    out += numToWords(((n / 1000000000) % 100), "billions, "); 
    
    out += numToWords(((n / 1000000) % 1000), ""); 
  
    out += numToWords(((n / 1000000)%100), "millions, ");
    
    out += numToWords(((n / 100000) % 10), "lakhs and "); 
  
    out += numToWords(((n / 1000) % 100), "thousand, "); 
  
    out += numToWords(((n / 100) % 10), "hundred "); 
  
    if (n > 100 && n % 100) 
        out += "and "; 
  
        out += numToWords((n % 100), ""); 
  
    return out; 
} 
  
int main () 
{ 
    long n;
    cout <<"Enter the Number to change into Words: "<<endl;
  	cin>>n;
    cout << convertToWords(n) << endl; 
  
    return 0; 
} 