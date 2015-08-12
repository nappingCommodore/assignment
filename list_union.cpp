//doing union of two linked list

#include<iostream>
//#include"linked_list.h"
#include"duplicate_list.h"
using namespace std;

int main(){
	node *head1,*head2;
	head1=head1->add();
	head2=head2->add();
	node* tmp=head1;
	while(tmp->next!=NULL){
		tmp=tmp->next;
	}
	tmp->next=head2;
	head1->remove(head1);
	head1->print(head1);
return 0;
}
