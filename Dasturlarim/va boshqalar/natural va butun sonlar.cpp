#include <iostream>
#include <cmath>
using namespace std;
int main(){
long long	int n;  double m,s=0, a=0;
	cin>>n>>m;
	
    s=(1+n)*n*1.0/2;
	a=m*(fabs(m)+1)*1.0/2;
	
	cout<<s+a;
	return 0;
}
