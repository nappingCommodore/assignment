//Transform the algebraic expression with brackets into RPN form (Reverse Polish Notation).

#include<iostream>
#include<string>
using namespace std;

struct stack1
{
 char a[410];
 int top;
 void push(char x);
 void pop();
};

void stack1::push(char x)
{
 a[++top]=x;
}


void stack1::pop()
{
 while(a[top]!='(')
 cout<<a[top--];
	top--;
}

int main()
{
int t;
char  b[420];
for(cin>>t;t>0;t--)
{
 cin>>b;
//cout<<b<<endl;
 stack1 s;
 s.top=-1;
 for(int i=0;b[i]!='\0';i++)
  {
   if(b[i]==')')
    s.pop();
  else
   if((b[i]=='+') || (b[i]=='-') || (b[i]=='*') || (b[i]=='/') || (b[i]=='^')||b[i]=='(')
    s.push(b[i]);
   
  else
   cout<<b[i];
  }
cout<<endl;
}
return 0;
}


