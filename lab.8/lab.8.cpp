#include<iostream>
using namespace std;

int main(){
   
   int nurber;
   
   int a;
   
   bool isinnurber_array=false;
   
   cout<<"請輸入數字:"<<endl;
   
   cin>>a; 
   
   int nurber_array[5]={57,78,96,65,77};
   
   
   
   for(int i=0;i<5;i++){
     
   cout<<nurber_array[i]<<endl;  
    
   if(a==nurber_array[i]){
   
   isinnurber_array=true; 
   
   }
   
   
   }
   
   if(isinnurber_array){
   
   cout<<"有此數在列陣裡"<<endl;
   
   }else{
   
  cout<<"無數自在列陣裡"<<endl; 
   
   }   

  
 
   
//   int total=0;
//   
//   for(int i=0;i<6;i++){
//   
//   total+=array[i];
//      
//   }
// 
//   cout<<"總數:"<< total<<endl;
//
//   cout<<"平均值:"<<total/5<<endl; 
   return 0;
}
