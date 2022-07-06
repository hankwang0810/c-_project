#include<iomanip>
#include<iostream>
using namespace std;


int main(){
	
	int x;
	int y=0;
	
	
	cout<<"請輸入高"<<endl;
	
	cin>>x;
	
	cout<<"請輸入寬"<<endl;
	
	cin>>y; 
	
	
	
	
	for(int i=1;i<=y;i++){
		
		for(int j=1;j<=x;j++){
		
		cout<<"*";
		
		}
		
		cout<<endl;
		
	}
	
}
