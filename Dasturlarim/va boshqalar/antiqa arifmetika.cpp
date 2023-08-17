#include <iostream>
using namespace std;
int main(){
	int n, m, x, y, s=0, k=1, a=0, b=1, c, d, e;
	cin>>n>>m;
	while(n!=0){
	  s=s+n%10;
	  k*=n%10;
	  n=n/10;
	}
	x=k-s;
//	cout<<k<<" "<<s<<" "<<x<<endl;
	while(m!=0){
		a=a+m%10;
		b*=m%10;
		m=m/10;
	}
	y=b-a;
//	cout<<b<<" "<<a<<" "<<y<<endl;
	cout<<x<<" "<<y<<" "<<x+y;
	
	
	
	
}
