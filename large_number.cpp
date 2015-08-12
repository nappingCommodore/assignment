//adding two large numbers using linked list

#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;

class node{
	private:
		int data;
		int carry;
		node* next;
		node* prev;
	public:
		node(){
			next=NULL;
			prev=NULL;
		}
		node* fill(string,int);
		void add(node*,node*);
		void print(node*);
};

node* node::fill(string ch,int n){
	n--;
	node* top;
	top=new node;
	node* tmp=top;
	while(n>=0){
		tmp->data=(int)(ch[n])-48;	//ascii value of zero is 48,(int) converts into ascii value
		tmp->carry=0;
		n--;
		if(n>=0){
			node* t=new node;
			tmp->next=t;
			t->prev=tmp;
			tmp=tmp->next;
		}
	}
return top;
}

void node::add(node* top1, node* top2){
	node* rear;
	node* tmp=top1;
	rear=tmp;
	while(top2!=NULL){
		tmp->data=(tmp->data+top2->data)+tmp->carry;
		if(tmp->data>10){
			tmp->next->carry=(tmp->data)/10;
			tmp->data=(tmp->data)%10;
			rear=tmp;
			tmp=tmp->next;
		}
		else{
			rear=tmp;
			tmp=tmp->next;

		}
		top2=top2->next;
	}
	if(rear->data>10){
		rear->next=new node;
		rear->next->prev=rear;
		rear->next->data=rear->data/10;
		rear->data=rear->data%10;
		rear=rear->next;
	}
	while(rear->next!=NULL)
		rear=rear->next;
	while(rear!=NULL){
		cout<<rear->data;
		rear=rear->prev;
	}
}

void node::print(node* top){
	while(top!=NULL){
		cout<<top->data;
		top=top->next;
	}
	cout<<endl;
}
int main(){
	string s1,s2;
	node* head1,*head2;
	cout<<"enter two large numbers\n";
	cin>>s1;
	cin>>s2;
	int n1,n2;
	n1=s1.length();
	n2=s2.length();
	if(n1>=n2){
		head1=head1->fill(s1,n1);		//head1>=head2
		head2=head2->fill(s2,n2);
		head1->print(head1);
		head2->print(head2);
	}
	else{
		head1=head1->fill(s2,n2);		//head1>=head2;
		head2=head2->fill(s1,n1);
		head1->print(head1);
		head2->print(head2);
	}
	head1->add(head1,head2);
return 0;
}
