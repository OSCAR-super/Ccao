#include<iostream>

using namespace std;

int main() {
    int i=0,n=0;
    string str;
    cout<<"enter a string:"<<endl;
    getline(cin,str);
    if (str[0]!=' '){
        n++;
    }
    while(i<str.length()-1) {
        if(str[i]==' '&&str[i+1]!=' '){
            n++;
        }
        i++;
    }
    cout<<"num of word is "<<n<<endl;
    return 0;
}

