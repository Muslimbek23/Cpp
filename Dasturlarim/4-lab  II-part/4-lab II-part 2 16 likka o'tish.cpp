#include <iostream>
#include <cmath>
using namespace std;
int main(){ 
int a,b;
//cout<<"Enter a decimal value (0 to 15): ";
cin>>b;
if(b>=0&&b<=15){
//cout<<"The hex value is ";
switch(b){
case 0:cout<<"0";break;
case 1:cout<<"1";break;
case 2:cout<<"2";break;
case 3:cout<<"3";break;
case 4:cout<<"4";break;
case 5:cout<<"5";break;
case 6:cout<<"6";break;
case 7:cout<<"7";break;
case 8:cout<<"8";break;
case 9:cout<<"9";break;
case 10:cout<<"A";break;
case 11:cout<<"B";break;
case 12:cout<<"C";break;
case 13:cout<<"D";break;
case 14:cout<<"E";break;
case 15:cout<<"F";break;}}
else cout<<b<<" is an invalid input ";}
