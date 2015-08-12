
#include<iostream>
using namespace std;

int main(){
	int num,p;
	cout<<"Enter number\n";
	cin>>num;
	int tmp=num,a[10];
	for(p=0;tmp>0;){
		a[p++]=tmp%10;
		tmp/=10;
	}
	p--;
		
	for(;p>=0;p--){
		
		if((p==9)||(p==8)||(p==6)||(p==5)||(p==3)||(p==2)||(p==0)){
			switch(a[p]){
				case 1:cout<<"one ";break;
				case 2:cout<<"two ";break;
				case 3:cout<<"three ";break;
				case 4:cout<<"four ";break;
				case 5:cout<<"five ";break;
				case 6:cout<<"six ";break;
				case 7:cout<<"seven ";break;
				case 8:cout<<"eight ";break;
				case 9:cout<<"nine ";break;
			}
		}
		if((p==7)||(p==4)||(p==1)){
			switch(a[p]){
				
				case 2:cout<<"twenty ";break;
				case 3:cout<<"thirty ";break;
				case 4:cout<<"forty ";break;
				case 5:cout<<"fifty ";break;
				case 6:cout<<"sixty ";break;
				case 7:cout<<"seventy ";break;
				case 8:cout<<"eighty ";break;
				case 9:cout<<"ninety ";break;
			}
		}
			
		if((p==8&&a[p]!=0)||(p==5&&a[p]!=0)||(p==2&&a[p]!=0))
			cout<<"hundred ";
		if(p==3&&a[p]!=0)
			cout<<"thousand ";
		if(p==6&&a[p]!=0)
			cout<<"million ";
		if(p==9&&a[p]!=0)
			cout<<"billion ";
	}
	    if(a[1]==1){
		switch(a[0]){
			case 1:cout<<"eleven ";break;
			case 2:cout<<"twelve ";break;
			case 3:cout<<"thirteen ";break;
			case 4:cout<<"fourteen ";break;
			case 5:cout<<"fifteen ";break;
			case 6:cout<<"sixteen ";break;
			case 8:cout<<"seventeen ";break;
			case 9:cout<<"nineteen ";break;
		}
	   }
return 0;
}	
