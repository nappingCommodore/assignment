//using auto

#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class stack{
	public:
	int top;
	string st[100];
	void *ele[100];		//array of void pointer declared
	stack(){
		top=-1;
	}
	/*union A{
		int n;
		float fl;
		char ch;
	};*/
	void push(void*);		//push accepts void pointer and int, vpointer to store data, int for tag whether it is int,double,char
	void* pop(string);	//string is for storing "int", "char" or "double" 

};

void stack::push(void* num){
	if(top==99){
		cout<<"stack is full\n";
		exit(1);
	}
	else
		ele[top]=num;
}

void* stack::pop(string m){
	if(m=="int"){				//if st[top]=="int" that means ele[top] is pointing towards an int
		return  ele[top--];
	}
	if(m=="char"){
		return  ele[top--];
	}
	if(m=="double"){
		return  ele[top--];
		
	}
	
}

int main(){

	stack s;
	int n,tag;
	char ch,v='y';
	double fl;
	for(int i=0;i<5;i++){
	cout<<"enter 1 for int,2 for char, 3 for float\n";
	cin>>tag;
	if(tag==1){
		cout<<"enter int\n";
		cin>>n;
		s.st[++s.top]="int";
		s.push(&n);
	}
	if(tag==2){
		cout<<"enter char\n";
		cin>>ch;
		s.st[++s.top]="char";
		s.push(&ch);
	}
	if(tag==3){
		cout<<"enter double\n";
		cin>>fl;
		s.st[++s.top]="double";
		s.push(&fl);
	}
	}	
	for(int i=4;i>=0;i--){
		if(s.st[i]=="int"){
			int* x=(int*) s.pop(s.st[i]);
			cout<<*x<<endl;
		}
		if(s.st[i]=="char"){
			char* x=(char*) s.pop(s.st[i]);
			cout<<*x<<endl;
		}
		if(s.st[i]=="double"){
			double* x=(double*) s.pop(s.st[i]);
			cout<<*x<<endl;
		}
	}
return 0;
}
