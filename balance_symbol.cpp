//Check whether symbol is balanced or not using stack

#include<iostream>
using namespace std;

int size(char a[]){
	int p=0;
	while(a[p]!='0'){
		p++;
	}
return p;
}

class stack{
	public:
		char elements[15];
		int top;
		stack(){
			top=-1;
		}
		void push(char);
		char pop();
};

void stack::push(char x){
	elements[++top]=x;
}

char stack::pop(){
	return elements[top--];
}

int main(){
	stack s;
	char ch[20];
	for(int i=0;i<20;i++){
		ch[i]='0';
	}
	cout<<"Enter the expression\n";
	cin>>ch;
	int p=size(ch);
	for(int i=0;i<p;i++){
		if(ch[i]=='{'||ch[i]=='['||ch[i]=='(')
			s.push(ch[i]);
		if((ch[i]=='}'&&s.elements[s.top]=='{')||(ch[i]==']'&&s.elements[s.top]=='[')||(ch[i]==')'&&s.elements[s.top]=='('))
			char z=s.pop();
	}
	
	if(s.top==-1)
		cout<<"Equation is balanced\n";
	else
		cout<<"Equation is not balanced\n";
return 0;
}
