#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct student{
	string rno;
	string name;
	string marks;
};


void unpack(ifstream &fin,student &s){
	 getline(fin,s.rno,'|');
	 getline(fin,s.name,'|');
	 getline(fin,s.marks,'|');
}

int main(){
	student s1[10],s2[10];
	ifstream fin1,fin2;
	int i,j;
	fin1.open("file1.txt");
	fin2.open("file2.txt");
	for(i=0;!fin1.eof();i++){
		unpack(fin1,s1[i]);
	}
	for(j=0;!fin2.eof();j++){
		unpack(fin2,s2[j]);
	}
	fin1.close();
	fin2.close();
	ofstream fout;
	fout.open("file3.txt");
	for(int k=0;k<i;k++){
		fout<<s1[k].rno<<endl;
		fout<<s1[k].name<<endl;
		fout<<s1[k].marks<<endl;
	}
	for(int k=0;k<i;k++){
		fout<<s2[k].rno<<endl;
		fout<<s2[k].name<<endl;
		fout<<s2[k].marks<<endl;
	}
	fout.close();
return 0;
}
