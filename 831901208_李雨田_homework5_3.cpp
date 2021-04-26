#include <iostream>
#include <math.h>

using namespace std;

int GCD(int a,int b){
    int c;
    while (b!=0){
        if (b>a){
            b=c;
            b=a;
            a=c;
        }
        c=b;
        b=a%b;
        a=c;
    }
    return c;
}

int main()
{
    cout<<GCD(84,49)<<endl;
    return 0;
}