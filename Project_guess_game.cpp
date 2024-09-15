#include<bits/stdc++.h>
using namespace std;


class Guesser{

    int guessednum;
    public:
        int takeguessernumber(){
            cout<<"Give the number for the guesser"<<endl;
            cin>>guessednum;
            return guessednum;
        }

};

class Player{
    int playernum;
    public:
        int takeplayerinput(){
            int p;
            cout<<"Give the number guessed by the player"<<endl;
            cin>>p;
            this->playernum = p;
            return p;
        }

};
class Umpire{

    int g, p1num, p2num, p3num;
    public:
        int getthenumberfromguesser(){
            Guesser g1;
            g = g1.takeguessernumber();
        }
        int gethenumberfromplayers(){
            Player p1, p2,p3;

            cout<<"Enter the guess of player 1-->"<<endl;
            p1num =  p1.takeplayerinput();
            cout<<"Enter the guess of player 2-->"<<endl;
            p2num =  p2.takeplayerinput();
            cout<<"Enter the guess of player 3-->"<<endl;
            p3num =  p3.takeplayerinput();


        }
        int printtheresult(){

        }

};



int main(){

cout<<"<<---------- Let's start the game ------------>>"<<endl;



Player p1;
p1.takeplayerinput();
 

cout<<"<<---------------- Let's end the game -------------------->>"<<endl;


    return 0;
}