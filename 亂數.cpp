#include<iostream>
#include <cstdlib> // �üƬ������
#include <ctime>   //�ɶ�������� 
using namespace std;
int main(){
	
	int num;
  	srand(time(0));
  	
	for(int i=0;i<10;i++){
		num=(1+rand()%6);
		cout<<num<<endl;
	}
	
}
