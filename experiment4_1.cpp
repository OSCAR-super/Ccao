#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    int a,b;
    b=1;
    cout << "Put in a number :";
    cin >> a;
    for (int i=0;i<a;i++){
        b*=2;
    }
    cout<< "Result is:"<<b<<endl;
    return 0;
}