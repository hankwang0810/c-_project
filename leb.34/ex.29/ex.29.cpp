#include<iomanip>
#include<iostream>
using namespace std;

int main(){
	
	
	
 int width = 5;
  int heigh = 10;


  for (int i = 0; i < heigh; i++)
  {
    
    if (i == 0 || i == (heigh - 1)) 
    {
      for (int j = 0; j < width; j++)
      {
        cout << "*";
      }
    }
   
    else
    {
      
        if ( j == 0 || j == (width - 1)) 
        {
          cout << "*";
        }
        
        else 
        {
          cout << " ";
        }
      }
    }
    cout << "" << endl;
  }
  return 0;
 
	
}
