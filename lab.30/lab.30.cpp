#include<iomanip>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int add(int k);
int multiplied(int k);
int main(){
	
	int  k=0;
	int  x=0;
	int  array[12]={0};
	int j;
	int g;
	
	
	
	srand((unsigned int)time(NULL));
	
	for(int i=1; i<=12; i++){
	
	k=rand()%100+1;
	
	 j+=k;
	array[i]=k;
    }
	
	for( int i=1; i<=12; i++){
	
	 g*=array[i];
	
 
    }
cout <<"x平均:"<<j/12<<endl;
	
	cout<<"x總和:"<<j<<endl; 
	
	cout<<"x相乘:"<<g<<endl;
}
