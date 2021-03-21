#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Solution {
public:
    string PalindromeNumber(int x)
    {
        int a = 0, b = 0;
        a = x;
        while(a >0){
            b = b*10 + a%10;
            a /=10;
        }
        if( b == x)
            return "true";
        else
            return "false";
    }
};

int main() {
    Solution Cou;
    int x;
    cout << "Input:";
    cin >> x;
    cout << "Output: " << Cou.PalindromeNumber(x) << endl;
    return 0;
}