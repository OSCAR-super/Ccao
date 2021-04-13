#include <iostream>
#include <math.h>

using namespace std;



int main()
{
    long long a;
    a=1;

    for (int i=33;i>2;i--){
        a*=i;
    }
    cout<< "Result is:"<<a<<endl;
    return 0;
}