#include <iostream>
using namespace std;

int main(){
	int num1,num2,num3,i=10;
	
	cin>>num1>>num2>>num3;

	while(i<=100){
		
		if(i%3==num1 && i%5==num2 && i%7==num3){
			cout<<i<<endl;
			return 0;		      //若符合條件則印出並結束程式			 
		}
		i++;	
	}
	//若未比對出答案則印出 No answer
	cout<<"No answer"<<endl;	
}
