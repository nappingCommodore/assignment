//fixed length

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct st{
	char name[20];
	char roll[10];
};

int main(){
	ofstream fout;
	st s;
	fout.open("data.txt");
	cout<<"enter name and roll\n";
	cin.getline(s.name,20);
	cin.getline(s.roll,10);
	fout<<s.name<<" \n"<<s.roll;
	fout.close();
	ifstream fin;
	fin.open("data.txt");
	st p;
	fin.getline(p.name,20);
	fin.getline(p.roll,10);
	cout<<p.name<<" "<<p.roll;
return 0;
}
