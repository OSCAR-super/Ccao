#include <iostream>
#include <math.h>

using namespace std;

string getEOO(int n,int den)
{
    if ( n % den == 0){
        return "Can be divided";
    }else{
        return "Can not be divided";
    }
}

int main()
{
    int n,den;
    cout << "Put in a number :";
    cin >> n;
    cout << "Enter the number to be divided :";
    cin >> den;
    cout << "This number :"<< getEOO(n,den)<< endl;
    return 0;
}