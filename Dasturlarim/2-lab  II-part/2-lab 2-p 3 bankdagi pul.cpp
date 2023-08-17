#include<iostream>
#include<cmath>
using namespace std;
int main (){
double  a,k=1+0.00417,x,y,z,q,w,b;
cout<<" Enter the monthly saving amount:  ";
cin>> a;
   x=a*k;
   y=(a+x)*k;
   z=(a+y)*k;
   q=(a+z)*k;
   w=(a+q)*k;
   b=(a+w)*k; cout<<b;
cout<<"After the six month, the account value is $"<<b;

}
