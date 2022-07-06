#include<iostream>
using namespace std;
    
    
    
    int add(int start,int end);


   
   
int main(){

	int a=add(1,10);
	
	
	cout<<a;
	
	}

int add(int start,int end){
	
	int total=1;
	
	
	
	for(int i=start;i<=end;i++){
		
		total=total*i;
		
	}
	
	return total;
	
}
