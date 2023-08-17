#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
long double x,x1,x2,x3,x4,y,y1,y2,y3,y4,k1,k2,b1,b2,  a, b, c, d, e, f ;
//cout<<" x1, y1, x2, y2, x3, y3, x4, y4, larni kriting ";
  cin>>x1>>y1>>x2>>y2;
  cin>>x3>>y3>>x4>>y4;
//cout<<" Bu to'g'ri  chiziqlar ";
 a=y1-y2;   b=x2-x1;     e=(y1-y2)*x1-(x1-x2)*y1;
 c=y3-y4;   d=x4-x3;     f=(y3-y4)*x3-(x3-x4)*y3;
    
 if (a*d==b*c ) cout<<"kesishmaydi";
//else if (k1==k2 && b1==b2) cout<<" ustma-ust tushadi "; 
else {
 x=(e*d-b*f)/(a*d-b*c); y=(a*f-e*c)/(a*d-b*c);
cout<<fixed<<setprecision(4)<<x<<" "<<fixed<<setprecision(4)<<y;}
return 0; }



