#include <iostream>
#include <cmath>
using namespace std;
int main(){ 
string a,b,c;                                   //cout<<" Enter the first city: ";
cin>>a;                                           //cout<<" Enter the second city: ";
cin>>b;                                               //cout<<" Enter the third city: ";
cin>>c;                                             //cout<<" The three cities in alphabetical order are ";
     if(a<=b && b<=c)cout<<a<<" "<<b<<" "<<c;
else if(a<=c && c<=b)cout<<a<<" "<<c<<" "<<b;
else if(b<=a && a<=c)cout<<b<<" "<<a<<" "<<c;
else if(b<=c && c<=a)cout<<b<<" "<<c<<" "<<a;
else if(c<=a && a<=b)cout<<c<<" "<<a<<" "<<b;
else                 cout<<c<<" "<<b<<" "<<a;}
