#include<iostream>
#include<iomanip>

using std::cout;
using std::cin;
using std::endl;

main(){
   
   int  a,b,c,larde;
   
   cout<<"請輸入A"; 
   
   cin>>a;
   
   cout<<"請輸入B";
   
   cin>>b;
   
   cout<<"請輸入C";
   
   cin>>c;
   
   if(a>b>c){
   
   cout<<"A>B>C"<<endl;
   
   }else if(b>a>c){
   
   cout<<"B>A>C"<<endl;
   
   }else if(c>b>a){
   
   cout<<"C>B>A"<<endl;
   
   }else if(b>c>a){
   
   cout<<"B>C>A"<<endl;
   
   }else if(c>a>b){
   
   cout<<"C>A>B"<<endl;
   
   }else if(a>c>b){
   
   cout<<"A>C>B"<<endl;
   
   }
} 
