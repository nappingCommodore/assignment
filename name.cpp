
#include<iostream>

using namespace std;
int size(char a[]){
	int p=0;
	for(int i=0;a[i]!='0';i++)
		p++;
return p;
}

int main(){
	char a[8],b[8];
	for(int i=0;i<8;i++){
		a[i]='0';
		b[i]='0';
	}
	cout<<"enter name\n";
	
	cin>>a>>b;
	int x,y;
	x=size(a);
	y=size(b);
	
	if(x>=y){
		cout<<a[0]<<" "<<b<<endl;
	}
	
	if(x<y){
		cout<<a<<" "<<b[0]<<endl;
	}
	
return 0;
}
