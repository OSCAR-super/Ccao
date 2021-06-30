#include<iostream>

using namespace std;

const int num=100;

struct Inventory{
    char description[50];
    int prodnum;
    int quantity;
    double price;
};

int main(){
    Inventory a[100]={};
    a[83].prodnum=4335;
    cout<<a[15].price<<endl;
}
