#include <iostream>
#include <iomanip>
using namespace std;
int main()
  {       int a, n, b=1000;

   for(n=1;n<=5;n++)
   { b=b+b*3*1.0/100; 
   cout<<n<<"\t"<<fixed<<setprecision(2)<<b<<endl; 
    }
  
  }
