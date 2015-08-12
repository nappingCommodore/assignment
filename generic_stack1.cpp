//make a generic stack
#include<iostream>
#include<cstdlib>
#define size 20
using namespace std;
template <class T>
class stack{
	public:
	int top;
	T ele[size];
	stack<T>(){
		top=-1;
	}
	void push(T);
	void pop();
};
template <class T>
void stack<T>::push(T str){
	if(top==size-1){
		cout<<"stack is full\n";
		exit(1);
	}
	else
		ele[++top]=str;
}
template <class T>
void stack<T>::pop(){
	if(top==-1){
		cout<<"stack is empty\n";
		exit(1);
	}
	else
		cout<<ele[top--]<<" ";
}

int main(){
	stack<int> s;
	stack<float>fl;
	stack<char>cr;
	int tag,a;
	float b;
	char ch,r='y';
	while(r!='n'){
	cout<<"enter 1 for integer, 2 for float, 3 for string\n";
	cin>>tag;
	if(tag==1){
		cout<<"enter an integer\n";
		cin>>a;
		s.push(a);
		}
	if(tag==2){
		cout<<"enter a float\n";
		cin>>b;
		fl.push(b);
	}
	if(tag==3){
		cout<<"enter a char\n";
		cin>>ch;
		cr.push(ch);
	}

	cout<<"do you want to enter more data,press n for no & y for yes\n";
	cin>>r;
	}

	while(s.top>=0){
		s.pop();
		fl.pop();
		cr.pop();
	}
return 0;
}
