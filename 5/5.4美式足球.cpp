#include<iostream> 
using namespace std;

int main(){
	
	int s,d,a,b,num;
	cin>>num;
	for(int i=0;i<num;i++){
	
		cin>>s>>d;
		a=(s+d)/2;
		b=s-a;
		if(a<0 || b<0 || (s+d)%2!=0 || (s-d)%2!=0)
			cout<<"impossible"<<endl;
		else if(a<b)
			cout<<b<<" "<<a<<endl;
		else
			cout<<a<<" "<<b<<endl;
		
	}
}
		

