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
        cout << array[i]<<":";
        if (array[i]<60){
            cout <<"F"<<endl;
        }else if (array[i]<70){
            cout <<"D"<<endl;
        }else if (array[i]<80){
            cout <<"C"<<endl;
        }else if (array[i]<90){
            cout <<"B"<<endl;
        }else{
            cout <<"A"<<endl;
        }
    }
    return 0;
}
