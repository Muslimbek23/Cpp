#include <iostream>
#include <cmath>
using namespace std;
int main(){  string a;  char b,c,d,e,f,g,h;
//cout<<" Tenglamani kriting; "; 
 cin>>a;
//cout<<" x=";
if(a.at(1)=='+' && a.length()==5) {
	     if(a.at(0)=='x')  cout<<a.at(4)-a.at(2);
	else if(a.at(2)=='x')  cout<<a.at(4)-a.at(0);
	else if(a.at(4)=='x')  cout<<a.at(0)+a.at(2)-96;}
else if(a.at(1)=='-' && a.length()==5) {
	     if(a.at(0)=='x')  cout<<a.at(4)+a.at(2)-96;
	else if(a.at(2)=='x')  cout<<a.at(0)-a.at(4);
	else if(a.at(4)=='x')  cout<<a.at(0)-a.at(2);}
else if(a.at(2)=='+' && a.length()==7)	{
	     if(a.at(1)=='x')  cout<<-(a.at(3)-a.at(6)-96);
	else if(a.at(3)=='x')  cout<<a.at(1)-a.at(6);
	else if(a.at(6)=='x')  cout<<a.at(1)+a.at(3);}
else if(a.at(2)=='-' && a.length()==7)  {
	     if(a.at(1)=='x')  cout<<a.at(6)-a.at(3);
	else if(a.at(3)=='x')  cout<<a.at(6)-a.at(1);
	else if(a.at(6)=='x')  cout<<a.at(1)+a.at(3)-96;}
else if(a.at(2)=='-') ;
	
}
	


