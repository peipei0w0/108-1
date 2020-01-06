#include<iostream>
using namespace std;

int main(){
	
	int min,max,total=0;
	cin>>min>>max;
	
	if(min%2==0)
		min++;
		
	while(min<=max){
		
		total+=min;
		min+=2;
		
	}
	
	cout<<total<<endl;
} 
