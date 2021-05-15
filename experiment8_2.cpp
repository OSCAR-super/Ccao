#include <fstream>
#include <string>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    ifstream ifs("../test.dat");
    string s;
    const size_t size_of_array = 100;
    int array[size_of_array];
    size_t i = 0;
    int a=0;
    while(ifs >> s){
        a++;
        if (a%2!=0) {
            sscanf(s.c_str(), "%d", &array[i++]);
            cout<<s;
        }
    }
    ifs.close();
    return 0;
}
