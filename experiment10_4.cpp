#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    while(true){
        if(n==pow(2,x)){
            cout<<"true"<<endl;
            break;
        }
        else if(n<pow(2,x)){
            cout<<"false"<<endl;
            break;
        }
        x++;
    }
    return 0;
}
