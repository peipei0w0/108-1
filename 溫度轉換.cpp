#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int f;
	cout<<"�п�J�@�ӵؤ�ū�"<<endl; 
	cin>>f; 
	cout<<"���ū׬� : "<< setprecision(3)<<fixed<<(f - 32)*5/9.0<<"��"<<endl; 
	return 0;
}
