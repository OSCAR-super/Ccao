#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
#include <set>

using namespace std;

bool perfectNumber(int num){
    int m=0;
    int n=(num-num%2)/2;
    for (int i = 1; i <= n; ++i) {
        if (num%i==0){
            m+=i;
        }
    }
    if (m==num){
        return true;
    } else{
        return false;
    }

};

int main()
{

    cout<<perfectNumber(2)<<endl;
}