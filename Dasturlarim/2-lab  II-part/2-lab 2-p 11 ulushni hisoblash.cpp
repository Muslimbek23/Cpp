#include<iostream>
#include<cmath>
using namespace std;
int main (){
double a,b,c,d;
cout<<" qo'yiladigan mablag' miqdorini kriting; ";
cin>>a;
cout<<" bir yillik ulush foizini kriting; ";
cin>>b;
cout<<" yil sonini kriting; ";
cin>>c;
   d=a*pow(1+b/1200, c*12);
cout<<" jamg'armaning qiymati $"<<d;

return 0; }
