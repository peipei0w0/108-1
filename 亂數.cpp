#include<iostream>
#include <cstdlib> // 亂數相關函數
#include <ctime>   //時間相關函數 
using namespace std;
int main(){
	
	int num;
  	srand(time(0));
  	
	for(int i=0;i<10;i++){
		num=(1+rand()%6);
		cout<<num<<endl;
	}
	
}
