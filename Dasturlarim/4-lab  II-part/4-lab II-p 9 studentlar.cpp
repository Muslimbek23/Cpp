#include <iostream>
#include <cmath>
using namespace std;
int main (){
	//cout<<" Ikkita belgi kriting ";
	char a, b;      
	cin>>a>>b;
	if((a=='M' || a=='C' || a=='I')&&(b=='1' || b=='2' || b=='3' || b=='4')){
	
	 switch (a){
		case 'M': cout<<"Mathematics"; break;
		case 'C': cout<<"Computer Science";break;
		case 'I': cout<<"Information Technology";break;
	}	//default: cout<<" major kodi xato ";break;
	
	 switch (b){                                   
	   case '1':cout<< " Freshman";	break;  
	   case '2':cout<<" Sophomore";break;	
	   case '3':cout<<" Junior"; break;
	   case '4':cout<<" Senior"; break;
	   //default: cout<<" status kodi xato ";break;
	}                        
}
	else if ((a!='M' || a!='C'  || a!='I')&&(b=='1' || b=='2' || b=='3' || b=='4'))
	 cout<<"Invalid major code";      
	else if ((a=='M' || a=='C' || a=='I')&&(b!='1' || b!='2' || b!='3' || b!='4'))
	cout<<"Invalid status code";
	else cout<<" ikkisi ham xato ";
	return 0;
}    
