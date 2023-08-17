#include <iostream>
using namespace std;
int main(){
	int a, b, c;  
	cin>>a>>b>>c;
	
	if(a!=1)
	for(int x1=-50; x1<=50; x1+=0.1){
	for(int x2=-50; x2<=50; x2+=0.1){
			if(x1+x2==-b*1.0/a && x1*x2==c*1.0/a){
			cout<<x1<<" "<<x2;   return 0;}
		}
	}
	
	
	else	for(int x1=-50; x1<=50; x1++){
	    	for(int x2=-50; x2<=50; x2++){
			if(x1+x2==-b*1.0/a && x1*x2==c*1.0/a)
			{cout<<x1<<" "<<x2;return 0;}
		}
	}
	return 0;
}
