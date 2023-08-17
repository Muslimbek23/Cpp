#include<iostream>
using namespace std;
int main(){
	double asd[3][4];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++)
		cin>>asd[i][j];		
	}double s;
	for(int i=0;i<4;i++){s=0;
		for(int j=0;j<3;j++)
		s+=asd[j][i];		
		cout<<s<<endl;
	}
	
	return 0;
}
