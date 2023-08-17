#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){ double H,R,r,h,s,b,t,m,x,v,c;
//cout<<"r,h,R ni kirit "; 
cin>>r>>h>>R;
//cout<<"Qalpoq Buratino boshini ";  
b=atan(r/h); t=R/sin(b); s=sqrt(t*t-R*R); m=sqrt(R*R-r*r); 
c=sqrt(h*h+r*r); x=s*cos(b);
    if (h>=t+R)     cout<<1;
else {
     if(h>t)   {  H=R-(h-t);  v=1-H*H*(3*R-H)/(4*R*R*R);}
else if(h==t)  { H=R;         v=H*H*(3*R-H)/(4*R*R*R);}
else if(h>x)   { H=R-(t-h);   v=H*H*(3*R-H)/(4*R*R*R);}
else if(t<=x+m){ H=R-m;       v=H*H*(3*R-H)/(4*R*R*R);}
cout<<fixed<<setprecision(3)<<v;}}
