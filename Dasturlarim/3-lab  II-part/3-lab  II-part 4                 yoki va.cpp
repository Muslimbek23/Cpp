#include <iostream>
using namespace std;
int main(){
int a;
//cout<<" butun sonni kriting ";
cin>>a;
//cout<<a<<" soni 5 va 6 ga bo'linadimi? ";
    if (a%5==0 && a%6==0)	cout<<"true ";
    else cout<<"false ";
//cout<<a<<" soni 5 yoki 6 ga bo'linadimi? ";
    if (a%5==0 || a%6==0)	cout<<"true ";
    else cout<<"false ";
//cout<<a<<" soni 5 yoki 6 ga bo'lib, ikkisiga ham bo'linmaydimi? ";
    if ((a%5==0 || a%6==0)&&(!(a%5==0 && a%6==0)))
		cout<<"true"<<endl;
    else cout<<"false"<<endl;}
