#include<iostream>
using namespace std;

int main(){
	
	int n,i=0,max;
	cout<<"請輸入10個數字"<<endl;
	
	while(i<10){
	
		cin>>n;			
			if(i==1)
				max=n;
			else if(n>max)
				max=n;
	i++;
	
	}
	
	cout<<max<<endl;
}
