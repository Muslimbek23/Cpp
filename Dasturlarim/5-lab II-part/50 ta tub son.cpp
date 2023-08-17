#include <iostream>    
#include <iomanip>   
using namespace std;   
int main()
{
  int tub_sonlar_soni=50;
  int qatorlar_soni=10;
  int sana=0, number=2;
  cout<<" 50 ta tub son \n";
  while (sana<tub_sonlar_soni){
  	bool tub=1;
  	for(int d=2; d<=number/2; d++){
  		if(number%d==0){
  			tub =0; break;
  	    }
  	}
  	if(tub){
  		sana++;
  		if(sana%qatorlar_soni==0)
  		cout<<setw(4)<<number<<endl;
  		else  cout<<setw(4)<<number;
  	}
  	
  	number++;
  }			
  return 0;	
}
 
