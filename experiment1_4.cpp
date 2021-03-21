#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Solution {
public:
    void Count(int n) {
        double pai, d;
        pai = 0;
        d = 1;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                pai += 4 * (1 / d);
            } else {
                pai -= 4 * (1 / d);
            }
            d += 2;
        }
        cout << "When the series is " << n << ",π is equal to : " << pai
             << endl;
    }
};

int main() {
    Solution Cou;
    Cou.Count(2);
    Cou.Count(3);
    Cou.Count(4);
    return 0;
}