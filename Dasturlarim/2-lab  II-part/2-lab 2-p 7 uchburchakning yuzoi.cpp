#include<iostream>
#include<cmath>
using namespace std;
int main (){
double  a,b,d,yuza, x1,y1,x2,y2,x3,y3,p;
cout<<" uchburchakningb uchta nuqtasi koordinatalarini kriting; ";
cin>>x1>>y1>>x2>>y2>>x3>>y3;
  a=sqrt( (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );
  b=sqrt( (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3) );
  d=sqrt( (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1) );  
  p=(a+b+d)/2; yuza=sqrt(p*(p-a)*(p-b)*(p-d));
cout<<" Bu uchburchakning yuzi "<<yuza<<" ga teng; ";

}  
  
