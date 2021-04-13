#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    double y;
    int x,z;
    for (x=1;x <6; x++) {
        for (z=2; z<7; z++) {
            cout<<"x is:"<<x<<",y is :"<<y<<",z is :"<<z<<endl;
            if (x==z){
                cout<<"x = z"<<endl;
            }
        }
    }

}