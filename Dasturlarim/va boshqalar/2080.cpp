#include <iostream>
using namespace std;
int main(){
	long long int n, m, k, x, y;
	cin>>n>>m>>k;
	if(n=m) cout<<1;
	else if(m<=k || n<m) cout<<-1;
	else{
		x=m-k;  y=n-m; cout<<y/x+1;
	}
	return 0;
}
