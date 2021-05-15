#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

using namespace std;

vector<int> *InputData_To_Vector()
{
    vector<int> *p = new vector<int>;
    ifstream infile("../a.txt");
    int number;
    while(! infile.eof())
    {
        infile >> number;
        p->push_back(number);
    }
    return p;
}

void Sum_Of_Num_Square(vector<int> *p)
{
    double Sum2 = 0;
    vector<int>::iterator it;
    int a=0;
    int i=0;
    for(it=p->begin(); it!=p->end(); it++)
    {
        if (a==0){
            a=*it;
        } else{
            Sum2 += *it;
            i++;
            if (i%a==0){
                cout<<Sum2/a<<endl;
                Sum2=0;
            }
        }
    }
}


int main() {
    vector<int> *file_to_vector = InputData_To_Vector();
    Sum_Of_Num_Square(file_to_vector);
    return 0;
}