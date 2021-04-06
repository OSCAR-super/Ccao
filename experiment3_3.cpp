#include <iostream>
#include <math.h>

using namespace std;

void getLSToL(int a,int b,int c)
{
    int t;
    if(a<b){
        t=a;
        a=b;
        b=t;
    }
    if(a<c){
        t=a;
        a=c;
        c=t;
    }
    if(b<c){
        t=b;
        b=c;
        c=t;
    }
    cout << c <<b <<a;

}

int main()
{
    int a,b,c;
    cout << "Put in a number :";
    cin >> a;
    cout << "Put in a another number :";
    cin >> b;
    cout << "Put in the last number :";
    cin >> c;
    getLSToL(a,b,c);
    return 0;
}