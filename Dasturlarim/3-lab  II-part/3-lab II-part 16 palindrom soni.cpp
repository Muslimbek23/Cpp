#include <iostream>
#include <cmath>
using namespace std;
int main(){
int w,a,b,c;
cout<<" uch xonali son kriting; "; cin>>w;
a=w%10;   b=(w/10)%10;  c=w/100;
if ( a==c) cout<<w<<" bu son palindrom ";
else cout<<w<<" bu son palindrom emas";}
