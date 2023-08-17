#include <iostream>
using namespace std;

void  printgrade(double tezlik){
	if(tezlik>=90.0)   cout<<'A'<<endl;
	else if(tezlik>=80.0)   cout<<'B'<<endl;
	else if(tezlik>=70.0)   cout<<'C'<<endl;
	else if(tezlik>=60.0)   cout<<'D'<<endl;
	else cout<<'F'<<endl;
	
}
int main()
{
	cout<<"tezlikni krit"<<endl;
	double tezlik;
	cin>>tezlik;
	
	cout<<"print grade is ";
	printgrade(tezlik);
return 0;
}
