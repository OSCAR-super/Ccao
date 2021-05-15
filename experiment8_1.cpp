#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout("../coupons.dat", ios::out);
    //you can repace the file name
    fout.close();
    return 0;
}