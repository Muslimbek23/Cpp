#include <iostream>
using namespace std;

char  printgrade(double tezlik){
	if(tezlik>=90.0)   return 'A';
	else if(tezlik>=80.0)   return 'B';
	else if(tezlik>=70.0)   return 'C';
	else if(tezlik>=60.0)   return 'D';
	else return 'F';
	
}
int main()
{
	cout<<"tezlikni krit"<<endl;
	double tezlik;
	cin>>tezlik;
	
	cout<<"print grade is "<<
	
		printgrade(tezlik);
return 0;
}
