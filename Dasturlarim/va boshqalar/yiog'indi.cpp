#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
	double a[1001]={0}, b[1001], n, x, y;  
 double s=0, p=0;

	cin>>n;
  for(int i=1; i<=n; i++)
  {
  	cin>>a[i];
    s=s+a[i];	
  } 
  s=s*1.0/n;
  for(int j=1; j<=n; j++){
  	p+=(a[j]-s)*(a[j]-s);
  }
 cout<<fixed<<setprecision(3)<<s<<" "<<sqrt(p/(n-1));
 
 	return 0;
}
