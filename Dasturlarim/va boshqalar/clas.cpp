#include <iostream>
 using namespace std;
  class Node{
   public:  int number; 
     Node* next; 
   }; 
   int main() {
       Node* head = NULL; 
	   Node* lastPtr = NULL; 
	   short action = -1; 
	   while (1) { 
	        cout<<"1. element qo’shish\n";
		    cout<<"2. ro’yhatni ko’rish\n";
		    cout<<"3. ro’yhat elementini o'chirish\n";
		    cout<<"0. chiqish\n\n";
		    cout<<"tanlang: ";
		 cin>>action;
		  if (action == 0) {
		   system("CLS");
		    break;}
		    if (action == 1) {       
			system("CLS");
			 Node* ptr = new Node; 
			 int numb = -1; 
			 cout<<"son kiriting:";
			 cin>>numb;
			  ptr->number = numb;
			  ptr->next = NULL; 
			  if (head == 0) {      
			  head = ptr; 
			  lastPtr = ptr; 
			  system("CLS");
			   continue; } lastPtr->next = ptr; lastPtr = ptr; system(‘CLS’); continue;
} if (action == 2){ Node* ptr = NULL; if (head == 0) {      cout<<‘\t!!! ro’yhat bo’sh !!!\n\n’; system(‘PAUSE’); system(‘CLS’); continue; } cout<<‘* * * * * ro’yhat * * * * *\n\n’; ptr = head; while (1) { cout<<ptr->number<<‘ ‘; if (ptr->next == 0)  break; ptr = ptr->next; } cout<<‘\n\n’; system(‘PAUSE’); system(‘CLS’); continue; } if (action == 3) { system(‘CLS’); int d; cout<<‘o'chiriladigan elementni kiriting’; cin>>d; Node* p = head,*q; while(p){ if(d==p->number){ if(p==head){ Node *t=p->next; head=t; delete(p);break; } else if(p==lastPtr){ q->next=NULL; delete(p);break; } else { q->next=p->next;
delete(p);break; } } q=p; p=p->next; } system(‘CLS’); cout<<‘element o'chirildi’; system(‘pause’); continue;} } }



