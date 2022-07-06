#include<iostream> 
using namespace std;


int main(){
	
	int number[10]={29,100,39,41,50,8,66,77,95,15} ;
	int x;
	
	for(int i=0;i<10;i++){
			
		x=x+number[i];	
			
	}
	
	cout<<x/10<<endl;
	
	for(int j=0;j<10;j++){
		
		if(number[j]>x/10){
			
			cout<<number[j]<<endl;
			
		}
		
		
	}
	
}
