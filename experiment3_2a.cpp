#include <iostream>
#include <math.h>

using namespace std;

string getEOO(int n)
{
    if ( n % 2 == 0){
        return "Even";
    }else{
        return "Odd";
    }
}

int main()
{
    int n;

    cout << "Put in a number :";
    cin >> n;
    cout << "This number is :"<< getEOO(n)<< endl;
    return 0;
}