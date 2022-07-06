#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	
	int *ptr[5];
    
	int var1 = 10, var2 = 20, var3 = 30,var4 = 40, var5 = 50;
	
	ptr[0]=&var1;
	ptr[1]=&var2;
	ptr[2]=&var3;
	ptr[3]=&var4;
	ptr[4]=&var5;


for(int i=0;i<5;i++)
{
	cout<<*(ptr[i])<<endl;
}

for(int i=0;i<5;i++)
{
	cout<<(ptr[i])<<endl;
}
for(int i=0;i<5;i++)
{
	cout<<(ptr[i])<<endl;
}

}
