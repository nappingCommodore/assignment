#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){
	ifstream fin1,fin2;
	fin1.open("file1.txt");
	if(fin1.fail()){
		cout<<"file didn't open\n";
		exit(1);
	}

	fin2.open("file2.txt");
	if(fin2.fail()){
		cout<<"file didn't open\n";
		exit(1);
	}

	int n1[100],n2[100],p[100],i=0;
	for(int m=0;m<100;m++)
		p[m]=0;
	for(;n1[i-1]!=-1;i++){
	
		fin1>>n1[i];
	}
			for(int j=0;n2[j-1]!=-1;j++){
				fin2>>n2[j];
			}
			for(int x=0;n1[x]!=-1;x++){
				for(int y=0;n2[y]!=-1;y++){
				if(n2[y]==n1[x])
					p[x]+=1;
				}
			}
			
	
	fin1.close();
	fin2.close();
	ofstream fout;
	
	int max=p[0];
	for(int j=1;j<=i;j++){
		if(p[j]>max)
			max=p[j];
	}

	
		fout.open("freq.txt",ios::app);
	if(fout.fail()){
		cout<<"file didn't open\n";
		exit(1);
	}
	
		for(int k=0;n1[k]!=-1;k++){
			fout<<n1[k]<<" ";
				for(int l=0;l<p[k];l++)
					fout<<". ";
				fout<<endl;
		}
		
	fout.close();
	
	
	
	
return 0;
}


		
