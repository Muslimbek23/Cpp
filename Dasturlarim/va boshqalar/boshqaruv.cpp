#include <iostream>
using namespace std; 
	class Node{
		public ;int number;
		Node*next;
	};
  int main(){
	{ Node*head=NULL;
	Node*last Ptr=NULL;
	short action=-1;
	
	}
	
	
	
	cout<<" O ruyxat elementini uzgarish \n";
	cout<<" tanlang ";
	cin>>action;
	if(action==o)   break;
	if(acyion==1){
		Node*Ptr=new Node;
		int numb=-1;
		cout<<"son kriting";
		cin>>numb;
		Ptr->number=numb;
		Ptr->next=NULL;
		if(head==0){
			head=ptr;
			last Ptr=ptr;
			continue;
		}
		last Ptr->next=ptr;
		last ptr=ptr;
		continue;
	}
	if(action==2){
		Node*ptr=NULL;
		if(head==0)
		cout<<"\t!!!ruyxat bush !!!\n\n";
		continue;
	}
	cout<<"***ruyxat**\n\n";
	ptr=head;
	while(1){
  	cout<<ptr->number<<" ";
	if(ptr->next==0){  break;
	ptr=ptr->next;
     }
	
return 0;
}
