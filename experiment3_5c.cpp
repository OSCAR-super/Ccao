#include <iostream>
#include <math.h>

using namespace std;

void getCout(double a,double b,double c)
{

    if (c==1){
        cout<<"The result is:"<< a+b;
    }else if (c==2){
        cout<<"The result is :"<< a*b;
    }
    else if (c==3){
        if (a==0){
            cout<<"error";
        } else{
            cout<<"The result is :"<< a/b;
        }
    }else{
        cout<<"error";
    }



}

int main()
{
    double a,b,c;
    cout << "Put in a number :";
    cin >> a;
    cout << "Put in a another number :";
    cin >> b;
    cout << "Put in the last number :";
    cin >> c;
    getCout(a,b,c);
    return 0;
}