//infix to prefix conversion

#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class stack{
	public:
		int top;
		char ele[100];
		stack(){
			top=-1;
		}
		void push(char);
		char pop();
};

void stack::push(char ch){
	if(top==99){
		cout<<"stack is full\n";
		exit(1);
	}
	else
		ele[++top]=ch;
}

char stack::pop(){
	if(top==-1){
		cout<<"stack is empty\n";
		exit(1);
	}
	else
		return ele[top--];
}
int preced(char ch){
	switch(ch){
		case '^':return 3;
		case '*':return 2;
		case '/':return 2;
		case '+':return 1;
		case '-':return 1;
		default: return 0;
	}
}

int main(){
	string ch,a;
	stack st,pre;
	ch="(";
	cout<<"enter expression\n";
	cin>>a;
	ch+=a;
	int n=0;
	while(ch[n]!='\0')
		n++;
		n--;
	int k=n;
	st.push(')');
	while(n>=0){
		if(ch[n]!='*'&&ch[n]!='/'&&ch[n]!='+'&&ch[n]!='-'&&ch[n]!=')'&&ch[n]!='(')
			pre.push(ch[n]);
		if(ch[n]==')')
			st.push(ch[n]);
		if(ch[n]=='*'||ch[n]=='/'||ch[n]=='+'||ch[n]=='-'||ch[n]==')'||ch[n]=='('){
			while(preced(ch[n])<=preced(st.ele[st.top])&&st.top!=-1){
				pre.push(st.pop());
			}
			st.push(ch[n]);
		}
		if(ch[n]=='('){
			char z=st.pop();
			while(z!=')'&&st.top!=-1){
				pre.push(z);
				z=st.pop();
			}	
			
		}
		n--;
	}

while(k>=0){
	char c=pre.pop();
	if(c==')'){
		k--;
	}
	else{
	cout<<c;
	k--;
	}
}
cout<<endl;
return 0;
}
