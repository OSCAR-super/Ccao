#include <iostream>

using namespace std;

int main(){
    double miles[]={240.5, 300.0, 189.6, 310.6, 280.7, 216.9, 199.4, 160.3, 177.4, 192.3};
    double gallons[]={10.3, 15.6, 8.7, 14, 16.3, 15.7, 14.9, 10.7, 8.3, 8.4};
    double mpg[10]={0};
    double *a=&miles[0];
    double *b=&gallons[0];
    double *c=&mpg[0];
    int i=0;
    while (i<10){
        *c=(*a)/(*b);
        cout<<*c<<"  ";
        c++;
        a++;
        b++;
        i++;
    }
    return 0;
}