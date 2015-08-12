//rated search using linked list

#include<iostream>
#include"linked_list.h"
using namespace std;

node* add_front(node* top,int k){
	node* tmp=new node;
	tmp->data=k;
	tmp->next=top;
	top=tmp;
	return top;
}

	

node* Search(node* top,int k){
	node* tmp=top;
	node* old=top;
	while(tmp->data!=k){
		old=tmp;
		tmp=tmp->next;
	}
	old->next=tmp->next;
	top=add_front(top,k);
}
int main(){
	node* head;
	head=head->add();
	head->print(head);
	int n;
	bool flag=true;
	while(flag==true){
		cout<<"enter the number\n";
		cin>>n;
		head=Search(head,n);
		head->print(head);
		cout<<"enter 0 to terminate else 1\n";
		cin>>flag;
	}
return 0;
}
	
