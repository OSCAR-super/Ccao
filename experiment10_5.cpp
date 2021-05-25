#include<iostream>
#include <set>

using namespace std;

int main(){
    string str;
    cout<<"Please input a string :"<<endl;
    set<char> sett;
    getline(cin,str);
    for (int i = 0; i < str.length(); ++i) {
        sett.insert(str[i]);
    }
    set<char >::iterator iter =sett.begin();
    while (iter!=sett.end()){
        cout<<*iter;
        iter++;
    }
}
