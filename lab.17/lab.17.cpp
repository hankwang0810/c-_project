#include<iomanip>
#include<iostream>
using namespace std;


int main(){
	
	int i=1;
	int j=1;
	bool x=true;
	
while( i<=9 )
{	
	cout<<endl;
	
	if(j==10)
	{
		j=1;
	}
	
	while( j<=9 )
	{
		cout<< i << "*" << j << "=" << i*j<< endl;
	    j++;
	}
	i+=1;
}
	
	return 0;
}
