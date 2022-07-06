#include<iostream>
using namespace std;


main(){
	
	int s=0;
	
	for(int i=1;i<=100;i+=2){
		
		cout<<i<<endl;
		
		s=i+s;
		
	}
	
	cout<<s<<endl;
	
}
