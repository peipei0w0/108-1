#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	int height, sex;
	cout<<"�Ф��O��J�����P�ʧO(�k�ͬ�1�A�k�ͬ�2)"<<endl;
	cin >> height >> sex;
	
	if(sex == 1) //�k��
		cout << setprecision(1) << fixed << (height-80)*0.7 << endl;
	else //�k��
		cout << setprecision(1) << fixed << (height-70)*0.6 << endl;

	return 0;
}
