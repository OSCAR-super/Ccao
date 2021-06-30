#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    string str;
    int num=0;
    ifstream fin("../a.txt");
    stringstream buffer;
    buffer << fin.rdbuf();
    str=buffer.str();
    for (int i = 0; i < str.length()-1; ++i) {
        if (str[i]==' '||str[i]=='\n'){
            if (str[i+1]!=' '&&str[i+1]!='\n'){
                num++;
            }
        }
    }
    if (str[0]==' '||str[0]=='\n'){
        num--;
    }
    cout<<num+1;
    return 0;
}