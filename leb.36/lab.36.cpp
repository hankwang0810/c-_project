#include<iomanip>
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int rand_num ()
{
	
	
	int num=rand()%100+1;
	
	return num;
	
	
}



int main(){
    cout <<"hello world"<<endl;
    
    srand(time(NULL));
    
   int maze[5][4]={};
   
   cout<<"座號"<<" "<<"國文"<<" "<<"英文"<<"　"<<"社會"<<"　"<<"自然"<<endl;
   
   for(int i=0;i<5;i++){
      
	   cout<<setw(2)<<" "<<i+1;
	   
   	for(int j=1;j<=4;j++){
        maze[i][j]=rand_num();
             
            
	   		cout<<setw(5)<<maze[i][j];
	   }
	   cout<<endl;
   }   
   
   

}
