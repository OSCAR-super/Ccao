#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double  x1,x2,y1,y2,slop;
    x1=3;
    x2=8;
    y1=7;
    y2=12;
    slop=(y2-y1)/(x2-x1);
    cout << "The value of the slop is "  << setiosflags(ios::fixed)
                                         << setprecision(2)
                                         <<  slop
         <<  endl;
    return 0;
}