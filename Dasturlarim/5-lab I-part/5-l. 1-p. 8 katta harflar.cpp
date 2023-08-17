#include <iostream>
#include <cstring>
using namespace std;
int main() 
 {      string a;         int  n, sana=0;  char x;
cout<<"suzlarni kriting  ";   cin>>a;
cout<<" katta harflarning soni   ";
  getline(cin,  a);
   for( n=0;  n<a.length();   n++)
   {
        x=a.at(n);
   if (isupper(x))  sana++;
   }
   cout<<sana;
 }
