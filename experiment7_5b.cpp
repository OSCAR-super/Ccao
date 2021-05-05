#include <iostream>
#include <fstream>
#include <cassert>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ifstream file;
    file.open("../a.txt");
    char szbuff[1024] = {0};
    int i=0;
    string a[100];
    while(!file.eof())
    {
        file.getline(szbuff,1024);
        a[i]=szbuff;
        i++;
    }
    sort(a,a+i-1);
    for (int j = 0; j < i; ++j) {
        cout<<a[j]<<endl;
    }
    return 0;
}