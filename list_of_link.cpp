//list of linked list

#include<iostream>
using namespace std;
struct node1{
	int data;
	node1* next;
	node1(){
		next=NULL;
	}
};

struct node{
	int data;
	node1* next1;
	node* next;
	node(){
		next1=NULL;
		next=NULL;
	}
};

node* input(){
	node* top=new node;
	node* tmp=top;
	int i=0;
	while(i<10){
		tmp->data=i;
		if(i<9){
			tmp->next=new node;
			tmp=tmp->next;
		}
		i++;
	}
return top;
}

void extend(node*top,int n){
	node* tmp=top;
	int i=0,j=n%10;;
	while(i!=j){
		tmp=tmp->next;
		i++;
	}
	if(tmp->next1==NULL){
		tmp->next1=new node1;
		tmp->next1->data=n;
	}
	else{	
		node1* k=tmp->next1;
		while(k->next!=NULL){
			k=k->next;
		}
		node1* t=new node1;
		t->data=n;
		k->next=t;
	}
}

void display(node* top){
	while(top!=NULL){
	if(top->next1==NULL){
		cout<<top->data<<"->0"<<endl;
		top=top->next;
	}
	else{
		node1* tmp=top->next1;
		cout<<top->data<<"->";
		while(tmp!=NULL){
			cout<<tmp->data<<" ";
			tmp=tmp->next;
		}
		cout<<endl;
		top=top->next;
	}
	}
}
		
int main(){
	node* head=input();
	int n;
	char ch='y';
	while(ch=='y'){
		cout<<"enter a number\n";
		cin>>n;
		extend(head,n);
		cout<<"do you want to enter more data? press y or n\n";
		cin>>ch;
	}
	display(head);
return 0;
}	
