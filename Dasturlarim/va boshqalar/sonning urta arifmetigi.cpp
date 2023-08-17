#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void  Average(int n, int a, int s){
	while (n!=0){
		s+=n%10;
		n=n/10;
	  a++;	
	}
	cout<<fixed<<setprecision(1)<<s*1.0/a;
}

int main(){   
   long long  int a=0, n, s=0;
	 cin>>n; 
   Average(n,a,s);
	return 0;
}
