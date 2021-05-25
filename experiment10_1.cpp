#include<iostream>

using namespace std;

int main(){
    string str;
    cout<<"Please enter a string :"<<endl;
    getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]=='e'){
            str[i]='x';
        }
    }
    cout<<str<<endl;
    return 0;
}
