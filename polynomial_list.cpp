//adding two polynomials using linked list

#include<iostream>
using namespace std;

class node{
	private:
	int coeff;
	int pow;
	node* next;
	public:
	node(){
		next=NULL;
	}
	node* polynom();
	node* add(node*,node*);
	void print(node*);
};

node* node::polynom(){
	node *top;
	top=new node;
	int n;
	cout<<"how many terms are in the polynomial\n";
	cin>>n;
	cout<<"enter coefficient\n";
	cin>>top->coeff;
	cout<<"enter power\n";
	cin>>top->pow;
	n--;
	node* t=top;
	while(n>0){
		node* tmp=new node;
		cout<<"enter another coefficient\n";
		cin>>tmp->coeff;
		cout<<"enter another power\n";
		cin>>tmp->pow;
		t->next=tmp;
		t=t->next;
		n--;
	}
	return top;
}

node* node::add(node* top1,node* top2){
	node*tmp=top1;
	node* old=tmp;
	while(tmp!=NULL){
		while(top2!=NULL){
			if(top1->pow<top2->pow){
				node* t=top2;
				top2=top2->next;
				t->next=top1;
				top1=t;
			}
			else
			if(tmp->pow>top2->pow){
				break;
			}
			else
			if(tmp->pow=top2->pow){
				tmp->coeff+=top2->coeff;
				top2=top2->next;
			}
			else
			if(tmp->pow<top2->pow){
				old->next=top2;
				node*t=top2;
				top2=top2->next;
				t->next=tmp;
			}
		}
		old=tmp;
		tmp=tmp->next;
	}
return top1;
}

void node::print(node* top){
	while(top!=NULL){
		cout<<top->coeff<<"x^"<<top->pow<<"+";
		top=top->next;
	}
	cout<<"0"<<endl;
}

int main(){
	node* head1,*head2;
	head1=head1->polynom();
	head2=head2->polynom();
	head1->print(head1);
	head2->print(head2);
	head1=head1->add(head1,head2);
	head1->print(head1);
return 0;
}
