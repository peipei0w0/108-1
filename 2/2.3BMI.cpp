#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int height, sex;
	cout<<"請分別輸入身高與性別(男生為1，女生為2)"<<endl;
	cin >> height >> sex;
	
	if(sex == 1) //男生
		cout << setprecision(1) << fixed << (height-80)*0.7 << endl;
	else //女生
		cout << setprecision(1) << fixed << (height-70)*0.6 << endl;

	return 0;
}
