#include<iomanip>
#include<iostream>
using namespace std;


int main(){
	
	int number[10]={29,100,39,41,50,8,66,77,95,15};
	int x=0;
	int y=0;
	
	for(int i=0;i<10;i++){
		
		if(number[i]>y){
			
			y=number[i];
			
		}
		if(number[i]<y){
			
			x=number[i];
			
		}
	}
	
	cout<<y<<endl;
	cout<<x;
}
