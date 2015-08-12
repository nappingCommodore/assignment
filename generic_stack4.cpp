//generic stack using structure return type

#include<iostream>
#include<string>
#include<cstdlib>
#define size 20
using namespace std;

union U{
	int num;
	float fl;
	char ch;
};

class stack{
	public:
		int top;
		int tag[size];
		stack(){
			top=-1;
		}
		U u[size];
		void push(int);
		void push(char);
		void push(float);
};

void stack::push(int n){
	if(top==size-1){
		cout<<"stack is full can't push more elements\n";
		exit(1);
	}
	else
		u[top].num=n;
}

void stack::push(char n){
	if(top==size-1){
		cout<<"stack is full can't push more elements\n";
		exit(1);
	}
	else
		u[top].ch=n;
}

void stack::push(float n){
	if(top==size-1){
		cout<<"stack is full can't push more elements\n";
		exit(1);
	}
	else
		u[top].fl=n;
}

		



int main(){
	stack s;
	int num; char ch,v='y'; float fl;
	while(v!='n'){
		cout<<"Enter 1 for int, 2 for char and 3 for float\n";
		cin>>s.tag[++s.top];
		if(s.tag[s.top]==1){
			cout<<"enter int\n";
			cin>>num;
			s.push(num);
		}
		else
		if(s.tag[s.top]==2){
			cout<<"enter char\n";
			cin>>ch;
			s.push(ch);
		}
		else
		if(s.tag[s.top]==3){
			cout<<"enter float\n";
			cin>>fl;
			s.push(fl);
		}
		cout<<"do you want to enter more data? press y for yes and n for no\n";
		cin>>v;
	}
	while(s.top!=-1){
		if(s.tag[s.top]==1)
			cout<<s.u[s.top--].num<<endl;
		if(s.tag[s.top]==2)
			cout<<s.u[s.top--].ch<<endl;
		if(s.tag[s.top]==3)
			cout<<s.u[s.top--].fl<<endl;
	}
	return 0;
}	
