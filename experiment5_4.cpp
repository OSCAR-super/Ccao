#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
#include <set>

using namespace std;

int add(int a,int n){
    int res=0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            res+=a*pow(10,j);
        }

    }
    return res;
};

int main()
{

    cout<<add(2,3)<<endl;
}