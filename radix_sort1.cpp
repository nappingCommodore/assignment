//radix sort using linked list

#include<iostream>
#include<cmath>
using namespace std;

struct node{
	int data;
	node* next=NULL;
};

void push(node** top,int k,int i){
        int j=(k/pow(10,i));
		j=j%10;
		//cout<<j<<endl;
		//cout<<j<<" ";
                if(top[j]==NULL){
                        top[j]=new node;
                        top[j]->data=k;
                }
                else{
                        node*tmp=top[j];
                        while(tmp->next!=NULL)
                                tmp=tmp->next;
			tmp->next=new node;
			tmp=tmp->next;
                        tmp->data=k;
                }
}


void display(node** top){
        int i=0;
        while(i<10){
                cout<<i<<"->";
                node* tmp=top[i];
                while(tmp!=NULL){
                        cout<<tmp->data<<" ";
                        tmp=tmp->next;
                }
		cout<<endl;
                i++;
        }
}

void radix_sort(node** top,int i){
	int n;
	cout<<"how many numbers you want to enter\n";
	cin>>n;
	int m=n;
	//cout<<m;
	while(n>0){
		int k;
                cout<<"enter number\n";
                cin>>k;
                push(top,k,i);
                n--;
        }

	display(top);
	//cout<<m;
	int a[m],z=3;
	while(z>0){
		int y=0;
		for(int x=0;x<10&&y<m;x++){
			node* tmp=top[x];
			node* old=top[x];
			while(top[x]!=NULL){
				a[y++]=top[x]->data;
				cout<<a[y-1]<<" ";
				top[x]=top[x]->next;
			}
		}
		i++;
		cout<<endl;
		for(int p=0;p<m;p++){
			push(top,a[p],i);
			//display(top);
		}
	z--;
	}
	cout<<"sorted result is:-";
	for(int c=0;c<m;c++)
		cout<<a[c]<<" ";
	cout<<endl;
}

int main(){
	node* head[10]={NULL};
	radix_sort(head,0);
return 0;
}
