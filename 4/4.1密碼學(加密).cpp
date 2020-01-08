#include<iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	//將四個數字拆解並加3取10餘數，並重新排列組合
	cout<<(num/10%10+3)%10*1000 + (num%10+3)%10*100 + (num/1000+3)%10*10 + (num/100%10+3)%10<<endl;

	return 0;
}
