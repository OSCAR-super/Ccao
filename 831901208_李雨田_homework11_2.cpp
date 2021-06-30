#include<iostream>

using namespace std;

const int num=50;

struct employee{
    string name;
    int age;
    int Social_Security_number;
    int hourly_wage;
    int years;
};

int main(){
    employee a[num]={};
    cout<<a[25].name<<endl;
    cout<<a[25].years<<endl;
    for(auto & i : a){
        i.hourly_wage+=50*i.years;
    }
    cout<<a[25].hourly_wage<<endl;
}


