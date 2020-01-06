#include<iostream>
#include<cmath>
using namespace std;

int main(){
	
	int n,m,a,b,c,i=0;
	
	cin>>n>>m;
	
	for(n;n<=m;n++){	
	
		a=n/100;
		b=n%100/10;
		c=n%10;
			
		if(n==pow(a,3)+pow(b,3)+pow(c,3)){

			cout<<n<<endl;
			i++;		
				
		}		

	} 
	
	cout<<"Total:"<<i<<endl;
	
}

