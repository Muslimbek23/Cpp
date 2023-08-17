#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){   
     int n;
	 cin>>n; 
	 double s=0;
	 for(int i=1; i<=n; i++){
	 	s+=1.0/(i*i);
		 }
	 cout<<fixed<<setprecision(5)<<sqrt(6*s);
	return 0;
}
