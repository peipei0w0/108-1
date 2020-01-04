#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"請輸入一個三位數"<<endl;
	cin>>num;
	cout<<(num/100)+(num%100/10)+(num%10)<<endl;
}
