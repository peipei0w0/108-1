#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	double a=0,b=0,c=0,d=0,e=0,total=0;
	int n,m;
	cin>>n;
		
	while(n!=-1){
		
		cin>>m;
		
		switch(n){
			
			case 1:
				a=a+m*2.98;
				break;
			case 2:
				b=b+m*4.50;
				break;
			case 3:
				c=c+m*9.98;
				break;
			case 4:
				d=d+m*4.49;
				break;
			case 5:
				e=e+m*6.87;
				break;
		
		}
		cin>>n;		
	} 
	cout<<fixed<<setprecision(2)<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<a+b+c+d+e<<endl;		
}

