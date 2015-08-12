//prefix to infix conversion

#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
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

int main(){
	stack st;
	string ch,pos;
	cout<<"enter prefix expression\n";
	cin>>ch;
	int i=0;
	while(ch[i]!='\0'){
		i++;
	}
	i--;
	int n=i;
	while(n>=0){
		if(ch[n]!='*'&&ch[n]!='/'&&ch[n]!='+'&&ch[n]!='-'){
			st.push(ch[n]);
		}
		if(ch[n]=='*'||ch[n]=='/'||ch[n]=='+'||ch[n]=='-'){
			char a=st.pop();
			char b=st.pop();
			pos[0]=a;
			pos[1]=ch[n];
			pos[2]=b;
			st.push(pos[2]);
			st.push(pos[1]);
			st.push(pos[0]);
		}
		
		n--;
	}
	
	while(st.top>=0)
		cout<<st.pop();
	cout<<endl;
return 0;
}
