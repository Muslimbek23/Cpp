#include <iostream>
#include <cmath>
using namespace std;
int main(){
int w,d1,d2,d3,d4,d5,d6,d7,d8,d9,a,b,c,d,e,f,g,z;
//cout<<" ISBN ning dastlabki 9 ta raqamini kriting; ";     
cin>>w;     
d9=w%10;   a=w/10;
d8=a%10;   b=a/10;
d7=b%10;   c=b/10;
d6=c%10;   d=c/10;
d5=d%10;   e=d/10;
d4=e%10;   f=e/10;
d3=f%10;   g=f/10;
d2=g%10;   
d1=g/10;   
z=(d1*1+d2*2+d3*3+d4*4+d5*5+d6*6+d7*7+d8*8+d9*9)%11;
//cout<<" ISBN ning 10 ta raqami ";
 if (z==10)  cout<<d1<<d2<<d3<<d4<<d5<<d6<<d7<<d8<<d9<<"x ";
 else cout<<d1<<d2<<d3<<d4<<d5<<d6<<d7<<d8<<d9<<z;
}
