#include <iostream>
using namespace std;
int main(){
	int   m, n, k, d, yuq, pas;
	cin>>m>>n>>k;
	
for(int i=0; i<m; i++)  if(n==i*k+1) {cout<<0; return 0}
for(int i=0; i<m; i++){
	if(i*k+1>n && i*k+1<m){
		yuq=i*k+1-n;
		pas=n-i*(k-1)+1
	}
}
	
	
	
	



	
	return 0;
}
