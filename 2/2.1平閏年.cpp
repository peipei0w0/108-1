#include<iostream>
using namespace std;

int main(){
	
	int year;
	cout<<"�п�J�@�Ӧ~��: "; 
	cin>>year;

	if((year%4==0 && year%100!=0) || (year%400==0)) 
		cout<<year<< " is LeapYear"<<endl;
	else
		cout<<year<<" is CommonYear"<<endl;
		
}
