#include<iostream>
#include<string>

using namespace std;

int main(){
    char ch;
    string str;
    int i;
    cout<<"enter a str:";
    cin>>str;
    cout<<"enter target char:";
    cin>>ch;
    int index=0;
    int fin=str.find(ch,index);
    while(fin != string::npos){
        index= fin+1;
        fin=str.find(ch,index);
        i++;
    }
    cout<<"appear times is :"<<i;
    return 0;
}