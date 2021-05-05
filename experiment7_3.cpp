#include<iostream>
#include<iomanip>

using namespace std;

int magic(int a[]){
    int size=sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < size; ++i) {
        if (a[i]==i){
            return i;
        }
    }
    return -1;
}

int main() {
    int a[]={0,1,1,1};
    cout<<magic(a)<<endl;
}

