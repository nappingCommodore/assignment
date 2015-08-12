//solving joshephus problem using linked list
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
		node *circle_add();
		void print(node*);
		void josephus(node*,int);
		void del(node*,int);
};

node* node::circle_add(){
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
	top->next=head;
        return head;
}

void node::print(node* top){
		node* tmp=top;
        while(tmp->next!=top){
                cout<<tmp->data<<"  ";
                tmp=tmp->next;
        }
	cout<<tmp->data;
        cout<<endl;
}


void node::josephus(node* top,int n){
	node* tmp=top;node* old=top;
	int i=n;
		while(tmp->next!=tmp){
			while(i>0){
				old=tmp;
				tmp=tmp->next;
				i--;
			}
			node*t=tmp;
			old->next=t->next;
			cout<<"we are deleting "<<t->data<<endl;
			delete t;
			tmp=tmp->next;
			i=n;
		}
	cout<<"lucky no.is="<<tmp->data<<endl;
}

int main(){
	node* head;
	int n;
	head=head->circle_add();
	head->print(head);
	cout<<"enter deleting term\n";
	cin>>n;
	head->josephus(head,n);
	return 0;
}
