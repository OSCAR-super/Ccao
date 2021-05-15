#include <fstream>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;


int main(){
    ofstream outfile;
    outfile.open("../aaa.dat",ios::out);
    string s;
    while (cin>>s)
    {
        outfile<<s;
        outfile<<"\n";

    }
    outfile.close();
    return 0;
}
