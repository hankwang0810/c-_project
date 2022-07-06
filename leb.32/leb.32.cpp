#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
   
int main(){
	

   
  int i = 0;
    int num = 0;
     vector<int> number_vector;
     vector<int> order_vec;
     
    number_vector.push_back(10);
	number_vector.push_back(15);
	number_vector.push_back(33); 
    number_vector.push_back(12);
    number_vector.push_back(44);
    number_vector.push_back(11);
	number_vector.push_back(43);
	number_vector.push_back(41); 
    number_vector.push_back(56);
    number_vector.push_back(21);
	
	for(i=0;i<number_vector.size();i++)
	{
		for(int j=0;j<i;j++)
		{
			if(number_vector[i]<number_vector[j])
			{
				number_vector.insert(number_vector.begin()+j,number_vector[i]);
				number_vector.erase(number_vector.begin()+i+1);
				break;
			}
		}
		
	}
	
	for(i=0;i<10;i++){
		
		cout<<number_vector[i]<<endl;
		
	}

} 
