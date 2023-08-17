#include <iostream>    
#include <cstring>       
#include <math.h>
using namespace std;   
int main()
  {       string a;     int b, c; 
cout<<" Enter the number of items: ";    cin>>b;

   for(int n=0;n<b; n++) 
   {
    cout<<" Enter the 1-item’s name and price: ";
   cin>>a>>c;   
    c=min(100, c);
   }
   cout<<"\n The lowest price item’s name is egg and price is $"<<c; 
    
  return 0;
  }
  
