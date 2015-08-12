//intersection of two linked list

#include<iostream>
#include"linked_list.h"
using namespace std;

node* intersect(node* top1, node* top2){
	node* tmp1=top1;
	while(tmp1!=NULL){
		node* tmp2=top2;
		while(tmp2!=NULL){
			if(tmp1->data==tmp2->data){
				break;
			}
			else
				tmp2=tmp2->next;
		}
		if(tmp2==NULL&&tmp1==top1){
			top1=top1->next;
			tmp1->del(tmp1,tmp1->data);
			tmp1=top1;
		}
		else
		if(tmp2==NULL){
			top1->del(top1,tmp1->data);
		}
		tmp1=tmp1->next;
	}
return top1;
}


int main(){
	node *head1,*head2;
	head1=head1->add();
	head2=head2->add();
	head1->print(head1);
	head2->print(head2);
	head1=intersect(head1,head2);
	head1->print(head1);
return 0;
}
