#include<iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	//�N�|�ӼƦr��Ѩå[3��10�l�ơA�í��s�ƦC�զX
	cout<<(num/10%10+3)%10*1000 + (num%10+3)%10*100 + (num/1000+3)%10*10 + (num/100%10+3)%10<<endl;

	return 0;
}
