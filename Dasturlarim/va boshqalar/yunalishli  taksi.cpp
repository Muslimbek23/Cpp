#include <iostream>
using namespace std;
int main(){
	
	int a, b, c, d=0, urta;
	cin>>a>>b>>c;
    	urta=(a+b+c)/3;
		
	if((a+b+c)%3!=0)   cout<<"IMPOSSIBLE";
	else {
		if(urta<a) d+=a-urta;
	    if(urta<b) d+=b-urta;
	    if(urta<c) d+=c-urta;
	    cout<<d;}
	    
	return 0;
}
