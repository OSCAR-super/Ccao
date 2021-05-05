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
    int i=0;
    while (true){
        cin>>a;
        if (a<0){
            break;
        }else if (a>60){
            cout<<"error"<<endl;
            break;
        }
        b[i]=a;
        i++;
    }
    sort(b,b+100,cmp);
    for (int j = 0; j < i; ++j) {
        cout<<b[i-1-j];
    }
    return 0;
}