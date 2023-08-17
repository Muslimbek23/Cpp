#include<iostream>
using namespace std;
int main ()
{
int a,b,c,d,e,h,g;
cin >> a;
b=a%60;
c=a/60;
d=c%24;
e=c/24;
h=e%365;
g=e/365;
cout << a << "minutes" << " " << h <<" " << d << " " <<b<<endl;
}
