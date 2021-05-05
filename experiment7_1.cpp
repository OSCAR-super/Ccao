#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    int a[]={100,100,300,300,300,300,300,300,300,300,300,10,10,10,10,10,5,5,300,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++)
        v.push_back(a[i]);
    vector< int > histogram(1000,0);
    vector< int >::iterator it = v.begin();
    while(it != v.end())    histogram[*it++]++;
    int mode = max_element(histogram.begin(),histogram.end()) - histogram.begin();
    std::cout << "majority = " << mode << std::endl;
    return 0;
}