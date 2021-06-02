#include <iostream>
#include <string>

using namespace std;

char *strcat (char *strDest, char *strSrc){
    string str="";
    while (*strDest != '\0'){
        str+=*strDest;
        strDest++;
    }
    while (*strSrc!='\0'){
        str+=*strSrc;
        strSrc++;
    }
    cout<<"Output :"<<str<<endl;
}

int main(){
    string dest,src;
    cout<<"Please enter the destination string :"<<endl;
    getline(cin,dest);
    cout<<"Please enter the source string :"<<endl;
    getline(cin,src);
    strcat(&dest[0],&src[0]);
}


