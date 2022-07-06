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
    number_vector.push_back(12);
    number_vector.push_back(21);
	number_vector.push_back(15);
	number_vector.push_back(33); 
	
	
	
	for(int  i=0;i<number_vector.size();i++)
	{	
	   cout<<number_vector[i]<<endl;	
	}

    for(int  i=0;i<number_vector.size();i++)
	{
		for(int j=0;j<number_vector.size();j++)
		{
			if(j==0)
			{
				order_vec.push_back(number_vector[i]);
			}
			else if(j==number_vector.size()-1)
			{
				order_vec.push_back(number_vector[i]);
			}
		}
	}





//     while (i<5)
//     {
//        cin >> num;
//        TODO
//        num_vec.push_back(num);
//        
//         i++;
//     }
//    for (int  i = 0; i < num_vec.size(); i++)
//    {
//      for (int j = 0; j < order_vec.size(); j++)
//      }
//    }
}
