#include <iostream>

using namespace std;

class Savings{
    private:
        float balance;
        float rate;
        float interest;
    public:
        Savings(float b,float r,float i);
        void calculate();
        void display() const;
};
Savings::Savings(float b,float r,float i){
    balance=b;
    rate=r;
    interest=i;
}
void Savings::calculate(){
    cout<<"Please enter the balance :";
    cin>>balance;
    cout<<"Please enter the rate    :";
    cin>>rate;
    interest=(balance)*(rate / 100);
}
void Savings::display() const{
    cout<<"The balance is :"<<balance<<endl;
    cout<<"The rate is :"<<rate<<endl;
    cout<<"The interest is :"<<interest<<endl;
}
int main(){
    Savings s(1.1,1.1,1.1);
    s.calculate();
    s.display();
    return 0;
}
