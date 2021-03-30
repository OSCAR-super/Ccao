#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int a;
    cout << "Please input a number: ";
    cin >> a;
    if (a <= 1)
    {
        cout << "false" << endl;
        exit(1);
    }
    while((a>>1)*2 == a) a >>= 1;
    if (a == 1) cout << "true" << endl;
    else cout << "false" << endl;

}