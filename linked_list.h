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
	void add_after(node*,int,int);
	void add_before(node*,int,int);
	void print(node*);
	void del(node*,int);
	void search(node*,int);
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
	while(ch=='y'){
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

void node::add_after(node* top,int x,int k){
	while(top->data!=x)
		top=top->next;
	if(top!=NULL){
		node* tmp=new node;
		tmp->data=k;
		tmp->next=top->next;
		top->next=tmp;
	}
	else
		cout<<"element "<<x<<" is not in this linked list\n";
}

void node::add_before(node* top,int x,int k){
	node* old=top;
	while(top->data!=x){
		old=top;
		top=top->next;
	}
	if(top!=NULL){
		node* tmp=new node;
		tmp->data=k;
		tmp->next=top;
		old->next=tmp;
	}
	else
		cout<<"element "<<x<<" is not in this linked list\n";
}

void node::print(node* top){
	while(top!=NULL){
		cout<<top->data<<"  ";
		top=top->next;
	}
	cout<<endl;
}	
		
void node::del(node* top,int x){
	node* old=top;
	while(top->data!=x){
		old=top;
		top=top->next;
	}
	if(top!=NULL){
		old->next=top->next;
		delete top;
	}
	else
		cout<<"element "<<x<<" is not in the list\n";
}

void node::search(node* top,int x){
	int i=1;
	while(top->data!=x&&top!=NULL){
		i++;
		top=top->next;
	}
	if(top==NULL)
		cout<<"element "<<x<<" is not in the list\n";
	else
		cout<<"element "<<x<<" is at position "<<i<<" in the list\n";
}

