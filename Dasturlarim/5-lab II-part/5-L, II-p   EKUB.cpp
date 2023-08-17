#include <iostream>    
#include <iomanip>   
using namespace std;   
int main()
{
int a, b, ekub=1;
cin>>a>>b;
for(int k=2; k<=a && k<=b; k++){
	if(a%k==0 && b%k==0)
	ekub=k;
}
cout<<ekub<<" "<<a*b/ekub;
}
 
