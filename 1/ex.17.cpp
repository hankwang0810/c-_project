#include<iostream>
using namespace std;

int main(){
   int a=0;
   int b=0;
   
   cout<<"請輸入一數(a)"<<endl;
   
   cin>>a;
   
   cout<<"請輸入一數(b)"<<endl;
   
   cin>>b;
   
   if(a%b==0){
   	cout<<"是"<<endl; 
   }else{
   	cout<<"不是"<<endl; 
   } 
   
   return 0;
}
