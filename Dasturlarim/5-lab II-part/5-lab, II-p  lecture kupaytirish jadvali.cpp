#include <iostream>    
#include <iomanip>   
using namespace std;   
int main()
{
	cout<<"           Kupaytirish jadvali\n";
	cout<<"------------------------------------------\n  |";
	
	for(int k=1; k<10; k++) 
	 cout<<setw(4)<<k;    
	 cout<<"\n__________________________________________"<<endl;
	for (int i=1; i<10; i++){
		cout<<i<<" |";
		for(int j=1; j<10; j++){
			cout<<setw(4)<<i*j;
		}
		cout<<endl;
	}
}
 
