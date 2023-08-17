#include <iostream>
using namespace std;
int main (){
	string a; double b, c, d, e, f;
cout<<" Enter employee’s name: ";  cin>>a;	
cout<<"Enter number of hours worked in a week: "; cin>>b;
cout<<" Enter hourly pay rate: "; cin>>c;
cout<<" Enter federal tax withholding rate: "; cin>>d;
cout<<" Enter state tax withholding rate: "; cin>>e;

cout<<"\n \nEmployee Name: "<<a;
cout<<" \nHours Worked: "<<b;
cout<<" \nPay Rate: "<<c;
cout<<" \nGross Pay: "<<b*c;
cout<<" \nDeducations ";
cout<<"\n\tFederal Withholding ("<<d*100<<" %) :"<<b*c*20/100;
cout<<"\n\tState Withholding ("<<e*100<<" %) "<<b*c*9/100;
cout<<"\n\tTotal Deducation: $"<<b*c*29/100;
cout<<" \nNet Pay: $"<<b*c*71/100<<endl;
return 23;
}
