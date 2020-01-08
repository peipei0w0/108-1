#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int f;
	cout<<"請輸入一個華氏溫度"<<endl; 
	cin>>f; 
	cout<<"攝氏溫度為 : "<< setprecision(3)<<fixed<<(f - 32)*5/9.0<<"度"<<endl; 
	return 0;
}
