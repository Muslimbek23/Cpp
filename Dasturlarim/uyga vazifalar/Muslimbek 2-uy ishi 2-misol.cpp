#include <iostream>
#include <cstring>
using namespace std;
int main(){ int a, b, c;         char x, y;
//cout<<"Tenglamani kiriting: ";  
cin>>a>>x>>b>>y>>c;
 //cout<<"x=";
 if(x=='*') {
     if(x=='*' && a*b==c) cout<<"correct";
     else cout<<"wrong";
	 }
else if(x=='/' ) {
    if(x=='/' && a/b==c) cout<<"correct";
    else cout<<"wrong";
	}
if(x=='+') {
    if(x=='+' && a+b==c) cout<<"correct";
    else cout<<"wrong";
	}
if(x=='-') {
    if(x=='-' && a-b==c) cout<<"correct";
    else cout<<"wrong";
	}
	return 0;
}
