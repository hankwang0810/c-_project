#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	
	int a[6]={6,4,5,1,3,2};
	int t=0;
	
	for(int i=6;i>0;i--)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	
	for(int j=0;j<6;j++)
	{
		cout<<" "<<a[j];
	}
	
}	

