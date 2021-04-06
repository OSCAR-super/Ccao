#include <iostream>
#include <math.h>

using namespace std;

int length(int t)
{
    int count =0;
    while(t)
    {
        t=t/10;
        ++count;
    }
    return count;
}
int getNumber(int t){
    int len=length(t);
    int numberAfter=0;
    if (len==1){
        return t;
    } else{
        for (int i=len;i>0;i--){
            numberAfter+=pow(t/pow(10,i),2);
            t-=t/pow(10,i);
        }
    }
    return numberAfter;
}

int main()
{
    int i=19;

    while(i!=1){
        int number=getNumber(i);
        if (i==number){
            cout << "false"  <<  endl;
            break;
        }
        i=number;
    }
    if (i==1){
    cout << "true"  <<  endl;}
    return 0;
}