//a structure of name student

#include<iostream>
#define student_no 2
using namespace std;

struct student{
	char name[20];
	int roll;
	float CGPA;
};

int main(){
	float average,sum=0;
	student *s[student_no];
	for(int i=0;i<student_no;i++){
		cout<<"Enter student's name\n";
		cin>>s[i]->name;
		cout<<"Enter student's roll number\n";
		cin>>s[i]->roll;
		cout<<"Enter student's CGPA\n";
		cin>>s[i]->CGPA;
	}
	
	for(int i=0;i<student_no;i++)
		sum+=s[i]->CGPA;
	average=sum/student_no;
	cout<<"Average CGPA of "<<student_no<<" students is="<<average<<endl;
return 0;
}
