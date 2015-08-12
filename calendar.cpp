//make calendar of 2014

#include<iostream>

using namespace std;

int main(){
	int month,a[7]={1,2,3,4,5,6,7};
	int i;
	for(month=1,i=4;month<=12;month++){
		switch(month){
			case 1:cout<<"January 2014\n";
			break;
			case 2:cout<<"February 2014\n";
			break;
			case 3:cout<<"March 2014\n";
			break;
			case 4:cout<<"April 2014\n";
			break;
			case 5:cout<<"May 2014\n";
			break;
			case 6:cout<<"June 2014\n";
			break;
			case 7:cout<<"July 2014\n";
			break;
			case 8:cout<<"August 2014\n";
			break;
			case 9:cout<<"September 2014\n";
			break;
			case 10:cout<<"October 2014\n";
			break;
			case 11:cout<<"November 2014\n";
			break;
			case 12:cout<<"December 2014\n";
			break;
		}
		
		cout<<"Mon\tTue\tWed\tThu\tFri\tSat\tSun\n";
		for(int k=1;k<i-1;k++)
			cout<<" \t ";
		if(month==2){
			for(int j=1;j<29;j++,i++){
				cout<<j<<" \t ";
				if(i>7){
					cout<<endl;
					i=1;
				}	
			}
		}
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
			for(int j=1;j<32;j++,i++){
				cout<<j<<" \t ";
				if(i>7){
					cout<<endl;
					i=1;
				}	
			}
		}
		if(month==4||month==6||month==9||month==11){
			for(int j=1;j<31;j++,i++){
				cout<<j<<" \t ";
				if(i>7){
					cout<<endl;
					i=1;
				}	
			}
		}
		cout<<endl;
	}

return 0;
}



