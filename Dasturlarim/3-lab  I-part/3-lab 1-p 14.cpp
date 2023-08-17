#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double x1,y1,x2,y2,H,L,h,l,a,b;
cout<<" 1-to'rtburchakning (x, y) koor-ri va (L, H)o'lchamini kriting ";
cin>>x1>>y1>>L>>H;
cout<<" 2-to'rtburchakning (x, y) koor-ri va (l, h) o'lchamini kriting ";
cin>>x2>>y2>>l>>h;
a=abs(x1-x2);
b=sqrt((y1-y2)*(y1-y2));
if (a<=(L-l)/2 && b<=(H-h)/2) cout<<" 2-to'rtb. 1-sining ichida ";
else if ( a>=(L+l)/2 || b>=(H+h)/2 )
 cout<<"2-to'rtb. 1-sining tashqarisida ";
else cout<<" ular qisman kesishgan ";

}
