#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
  {       int a, n, b=1000;

   for(n=0;n<=60; n+=10)
   
   cout<<endl<<n<<"\t"<<fixed<<setprecision(4)<<tan(n*M_PI/180)
     <<"\t"<<cos(n*M_PI/180)/sin(n*M_PI/180); 
    
  return 0;
  }
