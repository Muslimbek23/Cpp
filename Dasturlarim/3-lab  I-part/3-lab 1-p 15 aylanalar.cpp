#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double x1,y1,x2,y2,r1,r2,a;
cout<<" 1-aylananing (x, y) koor-ri va r1 radiusini kriting ";
cin>>x1>>y1>>r1;
cout<<" 2-aylananing (x, y) koor-ri va r2 radiusini kriting ";
cin>>x2>>y2>>r2;
a=sqrt((y1-y2)*(y1-y2)+(x1-x2)*(x1-x2));
if (a<=r1-r2) cout<<" 1-aylana 2-sining ichida ";
else if ( a>=r1+r2 ) cout<<" 1-aylana 2-sining tashqarisida ";
else cout<<" ular qisman kesishgan ";

}
