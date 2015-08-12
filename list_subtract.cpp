//subtracting two list
     
#include<iostream>
#include"linked_list.h"
using namespace std;

node* sub(node* top1,node* top2){
	node* tmp1=top1;
	while(tmp1!=NULL){
	    node* tmp2=top2;
                while(tmp2!=NULL){
			 if((tmp2->data==tmp2->data)&&(tmp1==top1)){
                        top1=top1->next;
                        tmp1->del(tmp1,tmp1->data);
                        tmp1=top1;
                	}
                        if(tmp1->data==tmp2->data){
                                tmp1->del(tmp1,tmp1->data);
                        }
                        else
                                tmp2=tmp2->next;
                
               
		}
    
                tmp1=tmp1->next;
        }
return top1;
}
			

int main(){
	node* head1,*head2;
	head1=head1->add();
	head2=head2->add();
	head1->print(head1);
	head2->print(head2);
	head1=sub(head1,head2);
	head1->print(head1);
	return 0;
}
