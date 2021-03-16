#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Solution {
public:
    void Count(double n) {
        double i;
        i=pow(n,0.25);
        cout << "The fourth root of this number is :" << i
             << endl;

    }
};

int main() {
    Solution Cou;
    Cou.Count(81);
    Cou.Count(16);
    Cou.Count(1);
    Cou.Count(0);
    Cou.Count(42);
    Cou.Count(121);
    Cou.Count(256);
    Cou.Count(587);
    Cou.Count(1240);
    Cou.Count(16256);
    return 0;
}