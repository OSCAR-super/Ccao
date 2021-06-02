#include <iostream>

using namespace std;

int main(){
    int array[10];
    int diff;
    cout<<"Please enter 10 numbers:"<<endl;
    for(int i=0;i<10;i++){
        cin>>array[i];
    }
    int max=*array;
    int min=*array;
    for (int i = 1;i<10;i++){
        if (max<*(array+i)){
            max =*(array+i);
        }
        if (min>*(array+i)){
            min =*(array+i);
        }
    }
    diff=max-min;
    cout<<"The difference between the maximum and the minimum is :"<<diff<<endl;
    return 0;
}
