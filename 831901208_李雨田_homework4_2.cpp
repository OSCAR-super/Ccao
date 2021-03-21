#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Solution {
public:
    void Count(double E,double R,double C) {
        double e,t,EAcross;
        e=2.71828;
        t=0.31;
        EAcross=E*(1-pow(e,(-t)/(R*C)));;
        cout << "Voltage across the capacitor is " << EAcross
             << endl;
    }
};

int main() {
    Solution Cou;
    Cou.Count(2,3,0.1);

    return 0;
}