//merging of two linked list

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
	node* add();
	void print(node*);
	node* merge(node*,node*);
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

node* node::merge(node* top1,node* top2){
	node* tmp=top1;
	while(tmp->next!=NULL){
		tmp=tmp->next;
	}
	tmp->next=top2;
	node*top,*t,*T;
	top=new node;
	top->data=0;
	T=top;
	tmp=top1;
	int i=0;
	while(tmp!=NULL){
		i++;
		tmp=tmp->next;
	}
	while(i>0){
	node*	min=top1;
		tmp=top1;
		while(tmp!=NULL){
			if((tmp->data<min->data) && (tmp->data!=-1)){
				min=tmp;
				tmp=tmp->next;
			}
			else{
				tmp=tmp->next;
			}
		}
	
		
		t=new node;
		t->data=min->data;
		T->next=t;
		T=T->next;
		if(min==top1&&top1->next!=NULL){
			top1=top1->next;
			min->data=-1;
		}
		else{
			min->data=-1;
		}
	i--;	
	}
	delete top1;
	return top;
	}
		
int main(){
	int i,j;
	node* head1,*head2,*head;
	head1=head1->add();
	head1->print(head1);
	head2=head2->add();
	head2->print(head2);
	head=head->merge(head1,head2);
	head->print(head);
	delete head1;
	delete head2;
	delete head;
return 0;
}
