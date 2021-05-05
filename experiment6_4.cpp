#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

bool cmp(int x,int y)
{
    return x>y;
}

int main()
{
    int a=0;
    int b[100]={0};
    int c[100]={0};
    int i=0;
    while (true){
        cin>>a;
        if (a<0){
            break;
        }
        b[i]=a;
        c[i]=a;
        i++;
    }
    sort(b,b+100,cmp);
    for (int j = 0; j < 100; ++j) {
        if (c[j]==b[0]){
            cout<<i-j<<endl;
            break;
        }
    }
    return 0;
}