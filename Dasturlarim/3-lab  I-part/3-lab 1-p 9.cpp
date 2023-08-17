#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int N,a,b,c,d;
cout<<" Enter an integer :  ";
cin>>N;
 a=N/1000;
 b=(N/100)%10;
 c=(N%100)/10;
 d=N%10;
 cout<<" Sum of oll digits in the integer: "<<a+b+c+d;
 
 	
}
