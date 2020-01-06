#include<iostream>
using namespace std;

int main() {
	
	int input, i=0;
	cout<<"請輸入一串數字 :";
	cin >> input;

	while (input > 0){

		input /= 10;
		i++;
		
	}

	cout<<"有"<<i<<"位數字"<<endl;
	
	return 0;
}
