#include <fstream>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

void printLine(string ifsname,int number){
    ifstream ifs(ifsname);
    string  line;
    int a=0;
    while(getline(ifs,line))
    {
        a++;
        if (a>=number){
            break;
        }
        cout<<line<<endl;
    }
    ifs.close();
}
int main(){
    printLine("../aaa.dat",5);
    return 0;
}
