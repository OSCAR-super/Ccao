#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
    int a[7]={0};
    int b[7]={0};
    int m;
    cout<<"Enter 7 number:"<<endl;
    for(int i = 0; i < 7; i++){
        cin>>a[i];
    }
    cout<<endl;
    cout<<"Enter m:"<<endl;
    cin>>m;
    int c=0;
    if (m>=0&&m!=7){
        for (int i = m; i < 7; ++i) {
            b[c]=a[i];
            b[i+1]=a[c];
            c++;
        }

    } else if (m==7){
        for (int i = 0; i < 7; ++i) {
            b[i]=a[i];
        }
    }else{
        cout<<"error"<<endl;
    }
    cout<<"[";
    for (int i = 0; i < 7; ++i) {
        if (i==6){
            cout<<b[i];
        } else{
            cout<<b[i]<<",";
        }

    }
    cout<<"]";
    return 0;
}