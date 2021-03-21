#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double  vout,vin,rin,rout;
    rin=0.75;
    rout=0.5;
    vin=1;
    vout=vin*pow(rin/rout,2);
    cout << "vout is : "  <<   vout
         <<  endl;
    return 0;
}