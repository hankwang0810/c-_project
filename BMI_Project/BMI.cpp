#include<iostream>

using namespace std;
int main(){
//	BMI值計算公式:    BMI = 體重(公斤) / 身高2(公尺2
	float height;
	float weight;
	float height_square;
	float height_meter;
	
	cout<<"請輸入身高"<<endl;
	
	cin>>height;
	
	
	cout<<"請輸入體重"<<endl;
	
	cin>>weight;
	
	height_meter=height/100;
	
    
	height_square = height_meter*height_meter;

	cout<<"你的BMI是:"<<weight /height_square <<endl; 
	
	return 0;
}
