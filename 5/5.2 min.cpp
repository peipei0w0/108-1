#include<iostream>
using namespace std;

int main(){
	int num2,num1,min;
	cin>>num1>>min;

	for(int i=0; i<num1-1; i++){
		cin>>num2;
		
		if(num2<min)
			min=num2;
		
	}

	cout<<min;

	return 0;
}
