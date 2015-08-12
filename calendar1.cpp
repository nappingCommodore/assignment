//vertical calendar

#include<iostream>
using namespace std;

int main(){
	int month,a[7]={1,2,3,4,5,6,7};
	int i;
	char *week_day={mon,tue,wed,thu,fri,sat,sun};
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
		for(int j=0;j<7;j++){
			cout<<week_day[j]<<" ";
				for(int k=1;k<=12;k++){
					
					
