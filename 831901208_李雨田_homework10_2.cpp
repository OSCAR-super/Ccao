#include <iostream>

using namespace std;

class Cartesian{
private:
    double a;
    double b;
public:
    Cartesian(double x,double y);
    void in();
    void display() const;
    Cartesian(const Cartesian&);
};
Cartesian::Cartesian(double x,double y){
    a=x;
    b=y;
}
void Cartesian::in(){
    double value1;
    double value2;
    cout<<"Please enter the value ot x :";
    cin>>value1;
    cout<<"Please enter the value ot y :";
    cin>>value2;
    a=value1;
    b=value2;
}
void Cartesian::display() const{
    cout<<"The cartesian object is ("<<a<<","<<b<<")."<<endl;
}
Cartesian::Cartesian(const Cartesian&existingCartesian){
    a=existingCartesian.a;
    b=existingCartesian.b;
}
int main(){
    Cartesian c(0.0,0.0);
    Cartesian cnew(0.0,0.0);
    c.in();
    c.display();
    cnew=Cartesian(c);
    cnew.display();
    return 0;
}
