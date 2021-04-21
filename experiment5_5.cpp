#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
#include <set>

using namespace std;


int main()
{
    int a;
    cin >> a;
    int n=a;
    int b=0;
    int earn=0;
    while (true){
        cin >> a;
        if (a>b){
            earn+=a-b;
        }
        cout<<"You earn:"<<earn-n<<endl;
        b=a;
    }

}