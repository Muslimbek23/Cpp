#include <iostream>
#include <iomanip>
using namespace std;
int main()
  {         double  a, b, c; int  k, i, j;
   cin>>a>>k>>c;
   

   for(int n=1;n<=k;n++)
   { a=a+a*c*1.0/1200; 
   cout<<n<<"\t"<<fixed<<setprecision(3)<<a<<endl;  }
  
  }
