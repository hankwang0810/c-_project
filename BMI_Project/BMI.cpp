#include<iostream>

using namespace std;
int main(){
//	BMI�ȭp�⤽��:    BMI = �魫(����) / ����2(����2
	float height;
	float weight;
	float height_square;
	float height_meter;
	
	cout<<"�п�J����"<<endl;
	
	cin>>height;
	
	
	cout<<"�п�J�魫"<<endl;
	
	cin>>weight;
	
	height_meter=height/100;
	
    
	height_square = height_meter*height_meter;

	cout<<"�A��BMI�O:"<<weight /height_square <<endl; 
	
	return 0;
}
