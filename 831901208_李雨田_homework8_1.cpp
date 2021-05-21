#include<iostream>

using namespace std;


string valid(string data){
    int i=0;
    string str;
    char a=data[0];
    while(data[i]!='.'){
        if(!(a==' '&&data[i]==' '&&i!=0)&&!(data[i]==' '&&data[i+1]=='.')){
            str+=data[i];
        }
        a=data[i];
        i++;
    }
    str+='.';
    return str;
}

char check(string data,int index){
    if(index==0){
        if(data[index]>='a'&&data[index]<='z'){
            return data[index];
        }
    }
    else{
        if(data[index]>='A'&&data[index]<='Z'){
            return data[index];
        }
    }
}

char fix(string data,int index){
    if(index==0){
        if(data[index]>='a'&&data[index]<='z'){
            data[index]-=32;
        }
    }
    else{
        if(data[index]>='A'&&data[index]<='Z'){
            data[index]+=32;
        }
    }
    return data[index];
}

int main()
{
    string data,checked,fixed;
    cout<<"Please enter the sentence is: "<<endl;
    getline(cin,data);
    data=valid(data);
    cout<<"The correct sentence is: "<<endl;
    for(int i=0;i<data.size();i++){
        checked+=check(data,i);
        fixed+=fix(data,i);
    }
    cout<<fixed<<endl;
    cout<<endl;
    cout<<"The wrong is: "<<endl;
    cout<<checked<<endl;
    return 0;
}

