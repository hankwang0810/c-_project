using namespace std;
#include <iostream>
 
int main()
{
//	// �魫(����) / ����2
	
   float weight;
   float height;
   float BMI;
   
   cout<<"�п�J����:"<<endl;   
   cin>>height;   

   cout<<"�п�J�魫"<<endl;
   
   cin>>weight;
   cout<<"�A��BMI�O:"<<weight/(height/100*height/100)<<endl;
   
   BMI=weight/(height/100*height/100);
   
   if(BMI<10){
   	cout<<"�A�ӻ��F"<<endl;
   	
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
