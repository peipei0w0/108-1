#include <iostream>
#include <cmath> //���F�ϥ�pow���禡
using namespace std;

int main(){
	int min,Max,total=0;

	cin>>min>>Max;

	for(int i=min;i<=Max;i++){
		
		if(pow(i%10,3) + pow((i/10)%10,3) + pow((i/100)%10,3) == i){
			cout<<i<<endl;
			total++;
		}
		
	}

	cout<<"Total:"<<total<<endl;
	
	return 0;
}
