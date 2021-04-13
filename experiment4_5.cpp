#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
using namespace std;



int main()
{
    srand(static_cast<unsigned int>(time(NULL)));
    int a,b,c;
    a=1;
    b=(rand() % (99))+ 1;
    while (a<8){

        cout << "Guess a number :";
        cin >> c;
        if (c==b){
            cout<<"You've guessed :"<<a<<" times"<<endl;
            break;
        } else{
            if (c>b){
                cout<<"Too high!"<<endl;
            } else{
                cout<<"Too low!"<<endl;
            }
        }
        a++;
    }
    cout<<"Game over!"<<endl;
}