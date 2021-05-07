#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<double> array;
    double number;
    cout <<"please input your score:"<<endl;
    while (true) {
        cin >> number;
        if (number<0){
            break;
        }
        array.push_back(number);
    }
    int len = array.size();
    double total=0;
    for (int i = 0; i < len; i++) {
        total+=array[i];
    }
    double avg=total/len;
    cout <<"avg is:"<<avg<<endl;
    for (int i = 0; i < len; i++) {
        if (array[i]<avg){
            cout <<"*";
        }
        cout << array[i] << endl;
    }
    return 0;
}
