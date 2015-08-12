//print binary no. using stack

#include<iostream>

using namespace std;

class stack{
	public:
	int elements[15];
	int top;
	stack(){
		top=-1;
	}
	void push(int);
	int pop();
	};
	
void stack::push(int x){
	elements[++top]=x;
}

int stack::pop(){
	return elements[top--];
}

int main(){
	stack s;
	int num,n;
	cout<<"Enter number to get binary equivalent\n";
	cin>>num;
	n=num;
	while(n>0){
		s.push(n%2);
		n/=2;
	}
	
	cout<<"Binary equivalent of "<<num<<" is= ";
	while(s.top!=-1){
		cout<<s.pop();
	}
cout<<endl;
return 0;
}
