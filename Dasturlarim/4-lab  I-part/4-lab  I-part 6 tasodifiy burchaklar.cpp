#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
srand(time(0));
double x1,y1,x2,y2,x3,y3,a,b,c,A,B,C,k=M_PI/180;
x1=rand()&41;  y1=sqrt(40*40-x1*x1);
x2=rand()&41;  y2=sqrt(40*40-x2*x2);
x3=rand()&41;  y3=sqrt(40*40-x3*x3);
a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
b=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
c=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
A=acos(((a*a-b*b-c*c)/(-2*b*c)));
B=acos(((b*b-a*a-c*c)/(-2*a*c)));
C=acos(((c*c-a*a-b*b)/(-2*b*a)));
cout<<" bu uchta burchak "<<A/k<<" "<<B/k<<" "<<C/k<<"  gradus "
<<(A+B+C)/k;}
