#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    int i=0;
    double daily=0.005;
    double total=0;
    cout<<"Day"<<"  "<<"Anout Owed"<<endl;
    cout<<"---"<<"  "<<"----------"<<endl;
    while (i<64){
        daily*=2;
        cout<<i+1<<"      "<<daily<<endl;
        i++;
        total+=daily;
        if (total>1000000){
            cout<<"pay 1 million dollars!"<<endl;
            break;
        }
    }
    return 0;
}