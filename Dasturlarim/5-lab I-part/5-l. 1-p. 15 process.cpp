#include <iostream>    
#include <cstring>   
using namespace std;   
int main()
  {       string a, b=" ";     int c; 
cout<<" Enter a string ";    cin>>a;
   getline(cin, a);
   for(int n=1;n<a.length(); n+=2) 
   b+=a.at(n); 
   cout<<b;
    
  return 0;
  }
  
