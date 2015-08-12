//indenting a c++ program
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
	ifstream fin;
	ofstream fout;
	int j=1;
	fin.open("prog1.txt");
	if(fin.fail()){
		cout<<"file didn't open\n";
		exit(1);
	}
	
	char ch;
	while(!fin.eof()){
		fin.unsetf(ios::skipws);
		fin>>ch;
		fout.open("prog2.txt");
		if(ch==';'){
		fout<<ch;
		fout<<endl;
		}
		if(ch!='{'&&ch!=';')
			fout<<ch;
		if(ch=='{'){
			fout<<endl;
			for(int k=j;k>0;k--){
				fout<<"\t";
			}
			fout<<ch;
			j++;
		}
		if(ch=='}'){
			fout<<endl;
			for(int k=j;k>0;k--){
				fout<<" ";
				}
			fout<<ch;
			j--;
		}
	fout.close();
	if(j==0){
		break;
	}
	}
	fin.close();
	
return 0;
}

				
