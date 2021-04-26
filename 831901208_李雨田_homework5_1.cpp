#include <iostream>
#include <math.h>

using namespace std;

int getPoint(int a,int b,int c)
{
    if (a>10){
        a=10;
    }
    if (b>10){
        b=10;
    }
    if (c>10){
        c=10;
    }
    int t=a+b+c;
    if (t<=21){
        if (a==1){
            t+=10;
            a+=10;
        }
        if (b==1&&t<=21){
            t+=10;
            b+=10;
        }
        if (c==1&&t<=21){
            t+=10;
            c+=10;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<" ";
    return t;

}

int main()
{
    int a,b,c;
    cout << "Put in a card :";
    cin >> a;
    cout << "Put in a another card :";
    cin >> b;
    cout << "Put in the last card :";
    cin >> c;
    cout <<"The point and the total point is : "<<getPoint(a,b,c)<<endl;
    return 0;
}