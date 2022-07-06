
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
   cout << "game start(1)剪刀(2)石頭(3)布 " << endl;
 while (cin >> input)
 {   

    
    count+=1;

   int computer_consqence = getComputer();
   int master_consqence = input;
   cout << "computer 出 : "  << endl;
   print(computer_consqence);
   cout << "master 出 : " << endl;
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
       cout << "判斷有問題 "<<endl;
       break;
   }
   cout << "電腦贏 : " << computer_win_count <<" 次" << endl;
   cout << "人類贏 : " << master_win_count <<" 次" << endl;

    if(computer_win_count == 2 && master_win_count<=2){
        cout << "computer win" << endl;
        break;
    }
    if(master_win_count == 2 && computer_win_count<=2){
        cout << "master win" << endl;
        break;
    }
    cout << "玩 " << count  << " 次" << endl;
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
         cout << "剪刀"<<endl;
    }else if(consquence == 2){
        cout << "石頭"<<endl;
    }else if(consquence == 3){
          cout << "布"<<endl;
    }else{
        cout << "你輸入的剪頭石頭布有問題"<<endl;
    }

}
// 剪刀 1
// 石頭 2
// 布   3


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

    cout << "在比剪刀石頭布誰獲勝時狀況判斷有問題"<<endl;
     return "有問題";
}


int getComputer(){
 srand(time(NULL));
 int random = rand()%3+1;
  return random;
}
