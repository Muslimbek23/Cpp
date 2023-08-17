#include <iostream>
#include <cmath>
using namespace std;
int main (){    int num, n, min=111110000;
	cin>>n;
	
	for( int k=1;  k<=n ; k++ )  {
	  cin>>num;
	 if (    num<min  )
	 
	  min=num;
	
    }
	
	cout<<min;	
	
	return 0;
}
