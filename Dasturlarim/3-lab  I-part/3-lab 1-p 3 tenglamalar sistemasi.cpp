#include <iostream>
#include <math.h>
using namespace std;
int main(){
double a,b,c,d,e,f,x,y;
cout<<" a,b,c,d,e,f sonlarni kriting; ";
cin>>a>>b>>c>>d>>e>>f;
if (a*d==b*c)
cout<<" Tenglamalar yechimga ega emas ;
else
x=(e*d-b*f)/(a*d-b*c); y=(a*f-e*c)/(a*d-b*c);
cout<<" x="<<x<<" ga  va y="<<y<<" ga teng";
}

