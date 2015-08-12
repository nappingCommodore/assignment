//union program

#include<iostream>
#include<string>
using namespace std;
union U{
	long long cell;
	char add[100];
};

class student{
	public:
	int rno;
	string name;
	int tag;
	U u;
};

int main(){
	student s;
	cout<<"enter roll\n";
	cin>>s.rno;
	cin.ignore(100,'\n');
	cout<<"enter name\n";
	getline(cin,s.name);
	cout<<"enter tag, 1 for cell no., 2 for address\n";
	cin>>s.tag;
	if(s.tag==1){
		cout<<"enter cell no\n";
		cin>>s.u.cell;
	}
	else
	if(s.tag==2){
		cout<<"enter add\n";
		cin.ignore(100,'\n');
		cin>>s.u.add;
	}

	cout<<s.rno<<endl;
	cout<<s.name<<endl;
	if(s.tag==1)
		cout<<s.u.cell<<endl;
	else
		cout<<s.u.add<<endl;
return 0;
}
	
