#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
    int row,column;
    cin>>row>>column;
    vector<vector<int> > a(row,vector<int>(column));
    for(int j = 0;j < row;j++){
        for(int k = 0;k< column;k++){
            a[j][k] = 0;
        }
    }
    int b;
    for(int j = 0;j < row;j++)
    {
        for(int k = 0;k< column;k++)
        {
            cin>>b;
            a[j][k] = b;
        }
    }
    sort(a.begin(),a.end());
    for(int j = 0;j < row;j++)
    {
        cout<<endl;
        for(int k = 0;k< column;k++)
        {
            cout<<a[j][k]<<"     ";
        }
    }
    return 0;
}
