#include <iostream>
using namespace std;
int main (){
	int a, mus=0, man=0, yig=0; 
		cout<<" butun son krit, tugatish uchun 0 ni krit ";
	   cin>>a;
	   if (a!=0)
   {
	while (a!=0)
	{
		if (a>0)  mus++;
		else man++;
		yig+=a;
		cin>>a;
	}
	cout<<" \nmusbat son "<<mus;
	cout<<" \nmanfiy son "<<man;
	cout<<" \numumiy son "<<yig;
	cout<<" \nularning urta arifmetigi "<<yig*1.0/(mus+man);
   }
   else cout<<" No numbers are entered except 0 \n";
	return 23;
}
