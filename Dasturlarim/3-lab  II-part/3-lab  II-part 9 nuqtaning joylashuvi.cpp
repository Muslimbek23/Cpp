#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,x0,x1,x2,y0,y1,y2;
//cout<<" uchta nuqtaning (x, y) koordinatalarini kriting; ";
 cin>>x0>>y0>>x1>>y1>>x2>>y2;
 a=(x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);
 if (a>0)  cout<<"chap";
 else if (a==0)  cout<<"tegishli";
 else  cout<<"o'ng";}
 

