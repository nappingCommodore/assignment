//checking whether 2nd list is 1st sublist

#include<iostream>
#include"duplicate_list.h"
using namespace std;

int sublist(node*l1,node*l2,int i){
	if(l1==NULL||l2==NULL)
		return i;
	if(l1->data==l2->data){
		i++;
		l2=l2->next;
	}
	l1=l1->next;
	if((i!=0)&&(l1->data!=l2->data))
		return i;
	sublist(l1,l2,i);
}

int main(){
	node* head1,*head2;
	head1=head1->add();
	head2=head1->add();
	head1->print(head1);
	head2->print(head2);
	node* tmp=head2;
	int n=0,m=0;
	while(tmp!=NULL){
		n++;
		tmp=tmp->next;
	}
	m=sublist(head1,head2,m);
	if(m==n)
		cout<<"sublist\n";
	else
		cout<<"not the sublist\n";
return 0;
}

