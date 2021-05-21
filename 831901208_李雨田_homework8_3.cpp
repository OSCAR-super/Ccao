#include<iostream>

using namespace std;

void first(string name){
    string fir;
    int i=0;
    while(name[i]!=' '){
        fir+=name[i];
        i++;
    }
    cout<<fir<<endl;
}

void last(string name){
    int count=0;
    for(int i=0;i<name.size();i++){
        if(count==1){
            cout<<name[i];
        }
        if(name[i]==' '){
            count++;
        }
    }
}

int main(){
    int n=5;
    string name[n];
    cout<<"Please enter 5 names:"<<endl;
    for(int i=0;i<n;i++){
        getline(cin,name[i]);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        last(name[i]);
        cout<<" ";
        first(name[i]);
    }
    return 0;
}

