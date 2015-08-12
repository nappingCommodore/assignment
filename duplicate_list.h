//remove duplicate data from the linked list

#include<iostream>
using namespace std;

class node{
	public://private:
		int data;
		node* next;
	//public:
	node(){
		next=NULL;
	}
	node* add();
	void print(node*);
	void remove(node*);
};

node* node::add(){
	char ch;
	int n;
	node *head,*tmp,*top;
	cout<<"enter a number to insert into list\n";
	cin>>n;
	cout<<"do you want to insert more number? press y for yes and n for no\n";
	cin>>ch;
	head=new node;
	head->data=n;
	top=head;
	while(ch!='n'){
		cout<<"enter a number to insert into list\n";
		cin>>n;
		tmp=new node;
		tmp->data=n;
		top->next=tmp;
		top=tmp;
		cout<<"do you want to insert more number? press y for yes and n for no\n";
		cin>>ch;
	}
	return head;
}

void node::print(node* top){
	while(top!=NULL){
		cout<<top->data<<"  ";
		top=top->next;
	}
	cout<<endl;
}

void node::remove(node *top){
	while(top!=NULL){
		node *tmp,*old;
		old=top;
		tmp=top->next;
		while(tmp!=NULL){
			if(tmp->data!=top->data){
				old=tmp;
				tmp=tmp->next;
			}
			else{
				old->next=tmp->next;
				node* t=tmp;
				old=tmp;
				tmp=tmp->next;
				delete t;
			}
		}
		top=top->next;
	}
}

