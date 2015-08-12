//using stack find a number is palindrome or not

#include<iostream>
#include<string>

using namespace std;

class stack{
	public:
	char elements[20];
	int top;
	stack(){
		top=-1;
	}
	void push(char);
	char pop();
};

int size(string n){
	int p=0;
	while(n[p]!='\0'){
		p++;
	}
return p;
}

void stack::push(char x){
	elements[++top]=x;
}

char stack::pop(){
	return elements[top--];
}

int main(){
	stack s;
	string ch;
	int p=0;
	cout<<"Enter a word to check whether it is palindrome or not\n";
	cin>>ch;
	while(ch[p]!='\0'){
		s.push(ch[p]);
		p++;
	}
	p=0;
	
	while(s.top!=-1){
		if(s.pop()==ch[p]){
			p++;
		}
		else
			break;
	}
	
	if(p==ch.length())
		cout<<ch<<" is a palindrome word.\n";
	else
		cout<<ch<<" is not a palindrome word.\n";
return 0;
}
