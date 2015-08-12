//generic stack using call by reference 

#include<iostream>
#include<cstdlib>
#include<string>
#define size 20
using namespace std;

class stack{
	public:
	int tag[20];
	int top;
	char *ele;
	stack(){
		top=-1;
		ele=new char[20];
	}
	void push(int);
	void push(char);
	void push(float);
	char pop(int&,float&);
};

void stack::push(int num){
	if(top==size-1){
		cout<<"stack is full can't push more elements\n";
		exit(1);
	}
	else
		ele[top]=(char)num;
}

void stack::push(char num){
	if(top==size-1){
		cout<<"stack is full can't push more elements\n";
		exit(1);
	}
	else
		ele[top]=num;
}

void stack::push(float num){
	if(top==size-1){
		cout<<"stack is full can't push more elements\n";
		exit(1);
	}
	else
		ele[top]=(char)num;
}

char stack::pop(int& a,float& b){
	if(tag[top]==1){
		a=(int)ele[top--];
		return 'a';
	}
	if(tag[top]==2)
		return ele[top--];
	if(tag[top]==3){
		b=(float)ele[top--];
		return 'a';
	}
	
}

int main(){
	stack s;
	
	int n;char ch,val='y'; float fl;
	while(val!='n'){
	cout<<"Enter 1 for int,2 for char, 3 for float\n";
	cin>>s.tag[++s.top];
	if(s.tag[s.top]==1){
		cout<<"enter int value\n";
		cin>>n;
		s.push(n);
	}
	if(s.tag[s.top]==2){
		cout<<"enter char value\n";
		cin>>ch;
		s.push(ch);
	}
	if(s.tag[s.top]==3){
		cout<<"enter float value\n";
		cin>>fl;
		s.push(fl);
	}
	cout<<"do you want to enter more data? press y for yes n for no\n";
	cin>>val;
	}
	while(s.top!=-1){
		if(s.tag[s.top]==1){
			s.pop(n,fl);
			cout<<n<<endl;
		}
		else
		if(s.tag[s.top]==2)
			cout<<s.pop(n,fl)<<endl;
		else
		if(s.tag[s.top]==3){
			s.pop(n,fl);
			cout<<fl<<endl;
		}
	}
	delete[]s.ele;
	return 0;
}
