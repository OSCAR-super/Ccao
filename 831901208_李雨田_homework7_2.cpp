#include <fstream>
#include <string>
#include <stdlib.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    ofstream outfile;
    outfile.open("../aaa.dat",ios::out);
    int a=0;
    while (a<20){
        a++;
        vector<double> array;
        double number;
        string s;
        cout <<"please input name:"<<endl;
        cin >> s;
        outfile<<s;
        cout <<"please input 1 score:"<<endl;
        cin >> number;
        outfile<<" "<<number;
        array.push_back(number);
        cout <<"please input 2 score:"<<endl;
        cin >> number;
        outfile<<" "<<number;
        array.push_back(number);
        cout <<"please input Homework score:"<<endl;
        cin >> number;
        array.push_back(number);
        outfile<<" "<<number;
        cout <<"please input Final E score:"<<endl;
        cin >> number;
        array.push_back(number);
        outfile<<" "<<number;
        double total=0;
        total=0.2*array[0]+0.2*array[1]+0.35*array[2]+0.25*array[3];
        cout <<"Final score is:"<<total<<endl;
        outfile<<" "<<total;
        if (total<70){
            outfile<<" " <<"D\n";
        }else if (total<80){
            outfile<<" "<<"C\n";
        }else if (total<90){
            outfile<<" "<<"B\n";
        }else{
            outfile<<" "<<"A\n";
        }
    }
    outfile.close();
    ifstream ifs("../aaa.dat");
    string  line;
    int b=0;
    while(getline(ifs,line))
    {
        b++;
        if (b>=a){
            break;
        }
        cout<<line<<endl;
    }
    ifs.close();
    return 0;
}
