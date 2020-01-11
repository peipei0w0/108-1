#include<iostream> 
using namespace std;

int main(){
	
	int n,m;
	cin>>n>>m;
	
	switch(n){
		case 1:
			for(int i=0;i<m;i++){	
				for(int j=0;j<m;j++){
					if(j>i)
						cout<<'-';
					else
						cout<<'*';
				}
				cout<<endl;
			}
			break;
		case 2:
			for(int i=0;i<m;i++){	
				for(int j=0;j<m;j++){
					if(j>=7-i)
						cout<<'-';
					else
						cout<<'*';
				}
				cout<<endl;
			}
			break;
		case 3:
			for(int i=0;i<m;i++){	
				for(int j=0;j<m;j++){
					if(j<6-i)
						cout<<'-';
					else
						cout<<'*';
				}
				cout<<endl;
			}
			break;
		case 4:
			for(int i=0;i<m;i++){	
			for(int j=0;j<m;j++){
				if(j<i)
					cout<<'-';
				else
					cout<<'*';
			}
			cout<<endl;
			}
			break;
		
	}
}

