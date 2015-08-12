//

#include<iostream>
#include<fstream>
#include<list>
#include<cstring>
using namespace std;

int main(){
	ifstream fin;
	fin.open("state.txt");
	ofstream fout;
	fout.open("result.txt");
	char state[3];
	int roll;
	list<int> up,ap,mp,tn;
	while(!fin.eof())
	{
		fin>>state>>roll;
		if(strcmp(state,"up")==0)
		up.push_back(roll);
		if(strcmp(state,"ap")==0)
		ap.push_back(roll);
		if(strcmp(state,"mp")==0)
		mp.push_back(roll);
		if(strcmp(state,"tn")==0)
		tn.push_back(roll);
	}
	list<int>:: iterator p=up.begin();
	fout<<"UP  ";
	while(p!=up.end())
	{
		fout<<*p<<"   ";
		p++;
	}
	fout<<endl;
	
		
	p=ap.begin();
	fout<<"AP  ";
	while(p!=ap.end())
	{
		fout<<*p<<"   ";
		p++;
	}
	fout<<endl;
	
	
	p=mp.begin();
	fout<<"MP  ";
	while(p!=mp.end())
	{
		fout<<*p<<"   ";
		p++;
	}
	fout<<endl;
	
	
	p=tn.begin();
	fout<<"TN  ";
	while(p!=tn.end())
	{
		fout<<*p<<"   ";
		p++;
	}
	fout<<endl;
	
	return 0;
}
