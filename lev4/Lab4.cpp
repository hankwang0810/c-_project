using namespace std;
#include <iostream>
 
int main()
{
//	// 體重(公斤) / 身高2
	
   float weight;
   float height;
   float BMI;
   
   cout<<"請輸入身高:"<<endl;   
   cin>>height;   

   cout<<"請輸入體重"<<endl;
   
   cin>>weight;
   cout<<"你的BMI是:"<<weight/(height/100*height/100)<<endl;
   
   BMI=weight/(height/100*height/100);
   
   if(BMI<10){
   	cout<<"你太輕了"<<endl;
   	
   }else if(10<=BMI<=15){
    cout<<"Highly severely underweight"<<endl;
   }else if(15<BMI<=16){
   cout<<"Severely underweinght"<<endl;
   }else if(16<BMI<18.5){
   cout<<"Underweight"<<endl;
   }else if(18.5<=BMI<=25){
   cout<<"Normal"<<endl;
   }else if(25<BMI<=40){
   cout<<"Overweight"<<endl;
   }else if(40<BMI<=50){
   cout<<"Obese"<<endl; 
   }else if(50<BMI<=60){
   cout<<"Severely obese"<<endl;
   }else if(60<BMI<=70){
   cout<<"Highly severly obese"<<endl;
   }else if(BMI>70){
   cout<<"Unreasonably large"<<endl;
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
}
