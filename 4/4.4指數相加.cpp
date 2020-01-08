#include <iostream>
using namespace std;

int main(){
	int min,Max,total=0;

	cin>>min>>Max;

	while(min<=Max){
		int i=0,num=1;
		
		while(i++<min){
			num *= 2;
		}
		total+=num;
		min++;
	}

	cout<<total<<endl;
	
	return 0;
}
