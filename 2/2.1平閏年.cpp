#include<iostream>
using namespace std;

int main(){
	
	int year;
	cout<<"請輸入一個年份: "; 
	cin>>year;

	if((year%4==0 && year%100!=0) || (year%400==0)) 
		cout<<year<< " is LeapYear"<<endl;
	else
		cout<<year<<" is CommonYear"<<endl;
		
}
