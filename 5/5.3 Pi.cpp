#include<iostream> 
#include<iomanip>
using namespace std;

int main(){
	
	double a=1,n,b=1,pi=0;
	cin>>n;
	
	for(int i=0;i<n;i++){
		
		pi+=b*4/a;
		b*=-1;
		a+=2;
		
	}
	cout<<fixed<<setprecision(8)<<pi<<endl;
}
		

