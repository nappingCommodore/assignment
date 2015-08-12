//insertion sort using linked list

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
	void print(node*);
	node* insrtn_sort(node*);
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
node* node::insrtn_sort(node* top){
	node* tmp1=top->next;
	while(tmp1!=NULL){
		node*tmp2=tmp1->prev;
		int k=tmp1->data;
		while(tmp2->prev!=NULL&&tmp2->data>k){
				tmp2->next->data=tmp2->data;
				tmp2=tmp2->prev;
			
		}
		if(tmp2==top&&top->next==tmp1){
			if(tmp2->data>k){
				tmp1->data=tmp2->data;
				top->data=k;
			}
		}
		else{
				tmp2->next->data=k;
		}
			tmp1=tmp1->next;
	}
return top;
}


int main(){
	node* head=head->add();
	head->print(head);
	head=head->insrtn_sort(head);
	head->print(head);
return 0;
}
