//making records using delimiter

#include<iostream>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;

struct student{
	string name;
	string roll;
	string rank;
	
};

void operator <<(ofstream &fout,student &s){
	string buffer="";
	buffer+=s.name;
        buffer+="|";
        buffer+=s.roll;
        buffer+="|";
        buffer+=s.rank;
        buffer+="|";
        buffer+="#";
        fout<<buffer<<endl;
}

void operator >>(ifstream &fin,student &s){
	char ch;
	fin>>ch;
	while(ch==' '||ch!='|'){
		s.name+=ch;
		fin>>ch;
	}
	fin>>ch;
	while(ch==' '||ch!='|'){
		s.roll+=ch;
		fin>>ch;
	}
	fin>>ch;
	while(ch==' '||ch!='|'){
		s.rank+=ch;
		fin>>ch;
	}
}

int main(){
	ofstream fout;
	student s1,s2;
	//cin.ignore(100,'\n');
	fout.open("input.txt");
	cout<<"enter details of 1st student\n";	
	getline(cin,s1.name);
	getline(cin,s1.roll);
	getline(cin,s1.rank);
	fout<<s1;
	cout<<"enter details of second student\n";
	getline(cin,s2.name);
	getline(cin,s2.roll);
	getline(cin,s2.rank);
	fout<<s2;
	fout.close();
	ifstream fin;
	fin.open("input.txt");
	student s3,s4;
	fin>>s3;
	fin>>s4;
	cout<<s3.name<<endl;
	cout<<s3.roll<<endl;
	cout<<s3.rank<<endl;
	cout<<s4.name<<endl;
	cout<<s4.roll<<endl;
	cout<<s4.rank<<endl;
	fin.close();
return 0;
}
