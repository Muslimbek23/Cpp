#include <iostream>
#include <iomanip>
using namespace std;
int main() {     
  int a, b, c, sana=0;


 cin>>a;
  if(a>0)
   for(int q=1;q<=a;q++)
  {
   for(int u=a; u>0; u--)  
   { 
   if(u<=q)    cout<< u <<" ";
    else       cout<<" "<<" ";
   } 
   
     for(int u=2; u<=a; u++)
   { 
   if(u<=q)     cout<< u <<" "; 
    else        cout<<" "<<" "; 
   }  cout<<endl;
   
    
  }
     
  } 
