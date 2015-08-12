//program to make a generic linked list

#include<iostream>
#include<string>
using namespace std;

union U{
	int data;
	char st[10];
};

struct node{
	int tag;
	U u;
	node* next;
	node(){
		next=NULL;
	}
};

node* add(){
	node* top=new node;
	node* tmp=top;
	char ch='y';
	cout<<"enter tag 1(int) or 2(string)\n";
	cin>>tmp->tag;
	while(ch=='y'){
		if(tmp->tag==1){
			int t;
			cout<<"enter integer\n";
			cin>>t;
			tmp->u.data=t;
		}
		else
		if(tmp->tag==2){
			cout<<"enter string\n";
			cin>>tmp->u.st;
		}
	cout<<"do you want to enter more data? press y or n\n";
	cin>>ch;
	if(ch=='y'){
		node* t=new node;
		tmp->next=t;
		tmp=tmp->next;
		cout<<"enter tag 1(int) or 2(string)\n";
		cin>>tmp->tag;
		}
	}
	return top;
}


void print(node *top){
	while(top!=NULL){
		if(top->tag==1){
			cout<<top->u.data<<" ";
			top=top->next;
		}
		else{
			cout<<top->u.st<<" ";
			top=top->next;
		}
	}
}
int main(){
	node *head;
	head=add();
	print(head);
return 0;
}
