#include<iomanip>
#include<iostream>
using namespace std;

int main(){
	
	int i,num'
	cout<<"請輸入資料筆數:"<<endl;
	cin>>num;
	int *p=new int[num] ;
	cout<<endl<<"動態配置一維陣列指標p"<<endl;
	for(i=0;i<num;i++)
	{
		cout<<"請輸入第"<<(i+1)<<"筆資料:"<<endl; 
	}
	
	cout<<endl<<"配置如下"<<endl;
	for(i=0;i<num;i++)
	{
		cout<<"第"<<(i+1)<<"筆資料:"<<*(p+i); 
		cout<<",記憶體位址:"<<endl; 
	} 
	
	cin>>*(p+1) 
	
	
	
	
	
}
