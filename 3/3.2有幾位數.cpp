#include<iostream>
using namespace std;

int main() {
	
	int input, i=0;
	cout<<"�п�J�@��Ʀr :";
	cin >> input;

	while (input > 0){

		input /= 10;
		i++;
		
	}

	cout<<"��"<<i<<"��Ʀr"<<endl;
	
	return 0;
}
