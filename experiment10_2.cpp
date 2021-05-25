#include<iostream>

using namespace std;

int num(string stos,char jew){
    int count=0;
    for(int i=0;i<stos.size();i++){
        if(stos[i]==jew){
            count++;
        }
    }
    return count;
}

int main(){
    int count=0;
    string jew,stos;
    cin>>jew>>stos;
    for(int i=0;i<jew.size();i++){
        count+=num(stos,jew[i]);
    }
    cout<<count<<endl;
    return 0;
}