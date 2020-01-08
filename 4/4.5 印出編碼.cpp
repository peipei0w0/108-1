#include<iostream>
using namespace std;

int main(){
	int min,Max;

	cin>>min>>Max;

	while(min<=Max){
		cout<<(char)min;
		min++;
	}

	cout<<endl;

	return 0;
}
