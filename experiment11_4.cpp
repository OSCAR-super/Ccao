#include <iostream>

using namespace std;

int main(){
    double array[11];
    double *ptArray=&array[0];
    double sum=0;
    cout<<"Please enter the numbers of the array:"<<endl;
    for(int i=0;i<10;i++){
        cin>>*ptArray++;
    }
    ptArray-=10;
    for(int i=0;i<10;i++){
        sum += *ptArray;
        ptArray++;
    }
    *ptArray=sum;
    ptArray-=10;
    cout << "The total of the array elements is " << sum << endl;
    cout << "All is:" << sum << endl;
    for (int i = 0; i < 11; ++i) {
        cout<<*ptArray<<"  ";
        ptArray++;
    }
    return 0;
}
