#include <iostream>
#include <string>
using namespace std;
int main(){ 
string a;

cin>>a;  
int b=(a.length());
switch(b)
{
case 5: 
    {
    if (a.at(0)==a.at(4) && a.at(1)==a.at(3))	
	cout<<"YES";
    else cout<<"NO"; 
	} break;
case 4: 	
    {
    if (a.at(0)==a.at(3) && a.at(1)==a.at(2))	
	cout<<" so'z palindrom ";
    else cout<<" so'z palindrom emas "; 
	} break;
case 3: 
    {
    if ( a.at(0)==a.at(2) )	
	cout<<" so'z palindrom ";
    else cout<<" so'z palindrom emas "; 
	} break;
case 2: 
    {
    if (a.at(0)==a.at(1))	
	cout<<" so'z palindrom ";
    else cout<<" so'z palindrom emas "; 
	}  break;

default: cout<<" xato kritdingiz "<<endl;
	
	}}

