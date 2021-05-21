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

void last(string name)
{
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

int main()
{
    string name;
    cout<<"Please enter a name:"<<endl;
    getline(cin,name);
    cout<<endl;
    last(name);
    cout<<" ";
    first(name);
    return 0;
}
