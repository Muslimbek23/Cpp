#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main(){
int x,x1,x2,y,y1,y2;   double k,b;
cout.precision(2);

 cin>>x1>>y1>>x2>>y2;
 
 k=(y1-y2)*1.0/(x1-x2);   b=1.0*(y2-k*x2);
 
 if (x1==x2) cout<<"y="<<fixed<<k<<"*x+"<<b;
 else if (y1==y2){
 	if(b==-0.00)  cout<<"y="<<fixed<<fabs<<"*x+"<<b;
 cout<<"y="<<fixed<<k<<"*x+"<<b;}
      
 else cout<<"y="<<fixed<<k<<"*x+"<<b;
}


