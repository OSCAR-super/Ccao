#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    ofstream OutFile("../a.txt", ios::trunc);
    int i;
    cout<<"please input lines you need:"<<endl;
    cin>>i;
    while (i>0){
        string a;
        cin>>a;
        OutFile << a;
        OutFile <<"\n";
        i--;
    }
    OutFile.close();
    return 0;
}