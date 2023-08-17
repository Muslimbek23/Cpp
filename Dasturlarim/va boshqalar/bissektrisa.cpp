#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	if(a+c>b && a+b>c && b+c>a){
	double p=(a+b+c)*1.0/2;
	double d=2*a*b*c*sqrt(p*fabs(p-a)*fabs(p-b)*fabs(p-c))/(a+b)/(b+c)/(c+a);
	cout<<fixed<<setprecision(2)<<d;
}
else cout <<"false";

	return 0;
}
