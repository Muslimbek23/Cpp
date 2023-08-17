#include <iostream>
using namespace std;
int sum (int a, int b){
	int sum=0;
	for( int i=a; i<=b; i++)
	sum+=i;
	return sum; 
}
int main()
{
	cout<<sum(1, 10)<<endl;
	cout<<sum(20, 37)<<endl;
	cout<<sum(35, 49)<<endl;
	cout<<sum(1, 100);
return 0;
}
