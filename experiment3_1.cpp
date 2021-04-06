#include <iostream>
#include <math.h>

using namespace std;

int getSalary(int h)
{
    if (h<=40){
        return h*12;
    }else {
        return 480+17*(h-40);
    }

}

int main()
{
    int n;

    cout << "Enter the length of time to work : ";
    cin >> n;
    cout << "Can get :"<< getSalary(n)<< endl;
    return 0;
}