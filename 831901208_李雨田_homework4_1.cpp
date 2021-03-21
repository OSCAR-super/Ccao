#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Solution {
public:
    void Count(double x1, double y1,double x2, double y2) {
        double x,y;
        x=(x1+x2)/2;
        y=(y1+y2)/2;
        cout << "Midpoint is:(" << x << ", " << y   << ")"
             << endl;
    }
};

int main() {
    Solution Cou;
    Cou.Count(4,6,16,18);
    Cou.Count(22,3,8,12);
    Cou.Count(-10,8,14,4);
    Cou.Count(-12,2,14,3.1);
    Cou.Count(3.1,-6,20,16);
    Cou.Count(3.1,-6,-16,-18);
    return 0;
}