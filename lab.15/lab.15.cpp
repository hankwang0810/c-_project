#include<iostream>
using namespace std;

int main(){
	
	int x[5]={};
	int y=0;
	int z=0;
	int v=0;
	
	cout<<"�п�J�������"<<endl;
	
	for(int i=0;i<5;i++){
		
		cin>>x[i];
		
	} 
		for(int i=0;i<5;i++){
		
		if(x[i]>y){
			
			y=x[i];
		
		cout<<y;
			
		}
		
		 if(x[i]<y){
			
			v=x[i];
			
		}
		
	} 
	cout<<"�̤j:"<<y<<endl;
		
		cout<<"�̤p:"<<v;
}
