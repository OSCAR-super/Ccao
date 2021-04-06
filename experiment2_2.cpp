#include <iostream>
#include <vector>
using namespace std;

bool isUglyNumber(int num){
    vector<int> index = { 2, 3, 5 };
    if (num <= 0){
        return false;
    }
    else if (num >= 1)
    {
        for (int i = 0; i < 3; i++)
        {
            while (num%index[i] == 0)
            {
                num /= index[i];
            }
        }
        return num == 1;
    }
}
int main(){
    int num;
    cout << "Input:";
    cin >> num;
    bool index = isUglyNumber(num);
    if (index)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}