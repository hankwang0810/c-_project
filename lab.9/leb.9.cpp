#include<iostream>
using namespace std;

int main(){
  
  int x=0;//�ۥ[���᪺�`�� 
  int y=0;//�⥭���Ʀs�Jy 
  
  int number[10]={29,100,39,41,50,8,66,77,95,15};//��int����ư}�C���Ʀr���number 
  
  for(int i=0;i<10;i++){//��}�C�̪��Ʀr�g�X�� 
  	
  	//cout<<number[i]<<endl;//��}�C�Ʀr�L�X�� 
  	
  	x+=number[i];//�[�`�� 
  	
  }
  
  cout<<"����"<<x/10<<endl;//��}�C�̭����Ʀr�[�`�������� 
  
  //cin>>y;//cin�O����L��J���Ʀr��Jy�̭� 
   y=x/10;
  
  for(int i=0;i<10;i++){//��}�C�̪��Ʀr�g�X��
  	
  	if(number[i]>y){//�����Ƹ�}�C�̪��Ʀr��j�p 
  		
  		cout<<number[i]<<endl;//�j�󥭧��Ȫ��Ʀr�C�X�� 
  		
	  }
  	
  	
  	
  }
  
}
   
   

