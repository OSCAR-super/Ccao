#include <iostream>

using namespace std;

bool palindrome(string array)
{
    int len = array.length();
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (array[i] != array[j])
            return false;
    }
    return true;
}
int main()
{
    cout << "input your string:" << endl;
    string input;
    getline(cin,input);
    if (palindrome(input))
    {
        cout << "yes" << endl;
    }

    else
        cout << "no" << endl;
    return 0;
}