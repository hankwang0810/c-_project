
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 



using namespace std;

int getComputer();
string isComputerWin(int computer_consqence,int master_consqence);
void print(int consquence);



int main()
{
 
 int input;
 int master_win_count = 0;
 int computer_win_count =0;
   int count = 0;
   cout << "game start(1)�ŤM(2)���Y(3)�� " << endl;
 while (cin >> input)
 {   

    
    count+=1;

   int computer_consqence = getComputer();
   int master_consqence = input;
   cout << "computer �X : "  << endl;
   print(computer_consqence);
   cout << "master �X : " << endl;
   print(master_consqence);


   string consquence = isComputerWin( computer_consqence, master_consqence);


   if(consquence == "win"){
       computer_win_count++;
       cout << "computer win , master lose " << endl;
   }else if(consquence == "lose"){
        master_win_count++;
        cout << "computer lose , master win " << endl;
   }else if(consquence == "tie"){
        cout << " is tie " << endl;
   }else{
       cout << "�P�_�����D "<<endl;
       break;
   }
   cout << "�q��Ĺ : " << computer_win_count <<" ��" << endl;
   cout << "�H��Ĺ : " << master_win_count <<" ��" << endl;

    if(computer_win_count == 2 && master_win_count<=2){
        cout << "computer win" << endl;
        break;
    }
    if(master_win_count == 2 && computer_win_count<=2){
        cout << "master win" << endl;
        break;
    }
    cout << "�� " << count  << " ��" << endl;
    if(count == 3){
        if(computer_win_count > master_win_count){
            cout << "computer win" << endl;
        }
        if(master_win_count > computer_win_count){
            cout << "master win" << endl;
        }
        if(computer_win_count == master_win_count){
            cout << "gameover , they are tie" << endl;
        }
        break;
    }
 }
 


  return 0;
}



void print(int consquence){
    if(consquence == 1){
         cout << "�ŤM"<<endl;
    }else if(consquence == 2){
        cout << "���Y"<<endl;
    }else if(consquence == 3){
          cout << "��"<<endl;
    }else{
        cout << "�A��J�����Y���Y�������D"<<endl;
    }

}
// �ŤM 1
// ���Y 2
// ��   3


string isComputerWin(int computer_consqence,int master_consqence){
    if(computer_consqence == master_consqence){
        return "tie";
    }
    if(computer_consqence ==1 && master_consqence ==2){
        return "lose";
    }
    if(computer_consqence ==1 && master_consqence ==3){
        return "win";
    }
    if(computer_consqence ==2 && master_consqence ==1){
        return "win";
    }
    if(computer_consqence ==2 && master_consqence ==3){
        return "lose";
    }
    if(computer_consqence ==3 && master_consqence ==1){
        return "lose";
    }
    if(computer_consqence ==3 && master_consqence ==2){
        return "win";
    }

    cout << "�b��ŤM���Y������Ӯɪ��p�P�_�����D"<<endl;
     return "�����D";
}


int getComputer(){
 srand(time(NULL));
 int random = rand()%3+1;
  return random;
}
