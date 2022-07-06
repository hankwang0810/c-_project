#include<iostream>
#include<cstdlib>
#include<ctime> 
using namespace std;

void randAvg();
int main(){
	
	int randAvg();
	

	
	randAvg();
}
void randAvg(){
	
	int a=0;
	int i;
	int x;
	int total = 0; 
	
	srand((unsigned int)time(NULL));
    
	for(int i=1;i<=10;i++){
	
	a=rand()%100+1;
	
	cout<< a<<endl;
	
	total+=a;
	

	}
	
	cout<<total<<endl;
	
	cout<<total/10;


}	

