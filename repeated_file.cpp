//print into a file the repeatition of student data

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
	 getline(fin,s.marks,'#');
}
int main(){
	student s1[50];
	student s2[50];
	ifstream fin;
	fin.open("student_data.txt");
	int i=0,k=0;
	while(!fin.eof()){
		unpack(fin,s1[i++]);
	}
	fin.close();
	s2[k].rno=s1[0].rno;s2[k].name=s1[0].name;k++;
	for(int j=1;j<i;j++){
		int p=0;
		for(int m=j-1;m>=0;m--){
			if((s1[j].rno==s1[m].rno)&&(s1[j].name==s1[m].name)){
				p++;
				break;
			}
		}
		if(p==0){
			s2[k].rno=s1[j].rno;
			s2[k].name=s1[j].name;
			k++;
			}
	}
	ofstream fout;
	fout.open("repeat.txt");
	for(int m=0;m<k;m++){
		for(int n=0;n<i;n++){
			if((s2[m].rno==s1[n].rno)&&(s2[m].name==s1[n].name))
				fout<<n<<" ";
		}
		fout<<"|";
	}
	fout.close();
	return 0;
}
