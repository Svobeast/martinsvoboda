#include <iostream>
#include <bits/stdc++.h> 


using namespace std;

class Game{
    public:
    virtual bool checkWin()=0;
    virtual void makeMove()=0;
    virtual void printResult()=0;

    int x = 0;
    int y = 0;

    bool turn = false;

    void startGame(){
        while(checkWin() == false){
            turn = !turn;
            makeMove();
        }
        printResult();
    }
};

class GuessGame : public Game{

public:
     
void makeMove(){
    switch(turn){
        case true :
            cout << "Hrac1 zada 1 pismeno: ";
            x = getchar();
            if(getchar()=='\n' && sizeof(x)<= 5 && x >= 97 && x <= 122){
               
                break;
            }else{
                cout << "Hrac1 nezadal prave 1 pismeno. Konec hry! \nVyhral Hrac2!" << endl;
                exit(1);
            };

        case false :
            cout << "Hrac2 zada 1 pismenko: ";
            y = getchar();
            if(getchar()=='\n' && sizeof(y)<= 5 && y >= 97 && y <= 122){
                
                break;
            }else{
                cout << "Hrac2 nezadal prave 1 pismeno. Konec hry! \nVyhral Hrac1!" << endl;
                exit(1);
            };
    }
};

void printResult(){

    if(x+8<y && x-8<y || x+8>y && x-8>y){
        cout << "Vyhral Hrac1!" << endl;
    }else{
        cout << "Vyhral Hrac2" << endl;
    }
};

bool checkWin(){

    if(x != 0 && y != 0){
        return true;
    }

    if(x == 0 || y == 0){
        return false;
    }
};

};

int main(){

    GuessGame GGobj; 

    GGobj.startGame();

}