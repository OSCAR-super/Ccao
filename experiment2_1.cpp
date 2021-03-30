#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Solution {
public:
    int length(int t)
    {
        int count =0;
        while(t)
        {
            t=t/10;
            ++count;
        }
        return count;
    }
    int PalindromeNumber(int x)
    {
        if (length(x)>5){
            return 0;
        }
        int a = 0, b = 0;
        a = x;
        while(a!=0){
            b = b*10 + a%10;
            a /=10;
        }
        return b;
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