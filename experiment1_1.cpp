#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double  W,F,d;
    cout << "Please enter the force value" << endl;
    cin >> F;
    cout << "Please enter the value of distance" << endl;
    cin >> d;
    W=F*d;
    cout << "And we figured out that the work was : "  <<   W
         <<  endl;
    return 0;
}