//postfix eveluation

#include<iostream>
#include<string>
#include<cstdlib>
#define size 20
using namespace std;
	class stack{
		public:
			int top;
			string ele;
			stack(){
				top=-1;
			}
			void push(char);
			char pop();
};

void stack::push(char ch){
	if(top==19){
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
	stack stk;
	char s[20];
	for(int i=0;i<20;i++){
		s[i]='\0';
	}
	cout<<"enter postfix expression\n";
	cin>>s;
	char op;
	int left,right,res;
	int i=0,k=0;
	while(s[i]!='\0'){
		if(s[i]=='*'||s[i]=='/'||s[i]=='+'||s[i]=='-'){
			 op=s[i++];k++;
			switch(op){
				case '+':right=stk.pop()-48;	//ASCII value of 0 is 48
					left=stk.pop()-48;
					res=left+right;
					if(k==1)
					stk.push(res);
					else
					stk.push(res+48);	//as res is int push takes it as int instead of char
					break;
				case '-':right=stk.pop()-48;
					left=stk.pop()-48;
					res=left-right;
					if(k==1)
					stk.push(res);
					else
					stk.push(res+48);
					break;	
				case '*':right=stk.pop()-48;
					left=stk.pop()-48;
					res=left*right;
					if(k==1)
					stk.push(res);
					else
					stk.push(res+48);
					break;;
				case '/':right=stk.pop()-48;
					left=stk.pop()-48;
					res=left/right;
					if(k==1)
					stk.push(res);
					else
					stk.push(res+48);
					break;
			}
		}
		else{
                        stk.push(s[i++]);
                }
	}
		int num=stk.pop();
		cout<<num;

return 0;
}
