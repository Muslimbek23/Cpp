#include <iostream>
using namespace std;
int main()

{ int n,  yig=0;
   cin>>n;
   while (n!=0)
    {yig+=n%10;
	 n/=10; 
    }
	cout<<yig;

	return 0;
} 
