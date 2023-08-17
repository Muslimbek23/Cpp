#include <iostream>
#include <iomanip>
using namespace std;

double fact(double a)
{double p=1;
for(double b=1;b<=a;b++)
p*=b;		
	return p;	
}

int main(){       double n;
double e=1;
  cin>>n;
for(double a=1;a<=100;a++)
e+=1/fact(a);
cout<<e<<endl;
  cout<<fixed<<setprecision(n)<<e;
}
