//bubble sort using linked list

#include<iostream>
using namespace std;

class node{
	private:
		int data;
		node* next;
		node* prev;
	public:
		node(){
			next=NULL;
			prev=NULL;
		}
		node* add();
		node* bubble_sort(node*);
		void print(node*);
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
		tmp->prev=top;
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

node* node::bubble_sort(node* top){
	node* tmp=top;
	while(tmp->next!=NULL)
		tmp=tmp->next;
	node* t1,*t2;
	while(tmp->prev!=NULL){
		t1=top;
		t2=top->next;
		while(t2!=tmp->next){
			if(t1->data>t2->data){
				int k=t1->data;
				t1->data=t2->data;
				t2->data=k;
			}
			t1=t2;
			t2=t2->next;
		}
		tmp=tmp->prev;
	}
	return top;
}

int main(){
	node* head;
	head=head->add();
	head->print(head);
	head=head->bubble_sort(head);
	head->print(head);
return 0;
}
