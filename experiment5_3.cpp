#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
#include <set>

using namespace std;

int addOdd(int min,int max){
    int res=0;
    if (min>max){
        return 0;
    }
    for (int i = min; i <= max; ++i) {
        if (i%2==1){
            res+=i;
        }
    }
    return res;
};

int main()
{
    int n;
    cin>>n;
    int min,max;
    int res=0;
    for (int i = 0; i < n; ++i) {
        cin>>min;
        cin>>max;
        int addRes=addOdd(min,max);
        if (addRes>res){
            res=addRes;
        }
    }
        cout<<"res is :"<<res<<endl;
}