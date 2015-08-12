//stack using linked list

#include<iostream>
using namespace std;

class node{
	private:
		int data;
		node* next;
	public:
		node(){
			next=NULL;
		}
		node* push();
		void pop(node*);
};

node* node::push(){
	node* top=new node;
	char ch;
	cout<<"enter data\n";
	cin>>top->data;
	cout<<"press y if you want to put more data else press n\n";
	cin>>ch;
	while(ch=='y'){
		node* tmp=new node;
		tmp->next=top;
		cout<<"enter data\n";
		cin>>tmp->data;
		cout<<"press y if you want to put more data else press n\n";
		cin>>ch;
		top=tmp;
	}
return top;
}

void node::pop(node* top){
	while(top!=NULL){
		cout<<top->data<<" ";
		top=top->next;
	}
}


int main(){
	node* head;
	head=head->push();
	head->pop(head);
return 0;
}
