#include <iostream>
#include <cmath>

using namespace std;

class Tri{ 
private:
    double side1;
    double side2;
    double side3;
    double d{};
    double e{};
public:
    Tri (double a,double b,double c){
        side1=a;side2=b;side3=c;
    }
    void length () const{
        cout<<"the sides are "<< side1 <<" "<<side2<<" "<<side3<<" "<<endl;
    }
    void Perimeter() const{
        cout<<"The Perimeter is "<<side1+side2+side3<<endl;
    }
    void area(){
        d=(side1+side2+side3)/2;
        e=sqrt(d*(d-side1)*(d-side2)*(d-side3));
        cout<<"The area is "<<e;
    }
};

int main(){
    double a,b,c;
    cout<<"Please enter three girths"<<endl;
    cin>>a>>b>>c;
    if ((a+b>c)&&(a+c>b)&&(b+c>a)){
        Tri e(a,b,c);
        e.length();
        e.Perimeter();
        e.area();
    }else{
        cout<<"Triangles don't exist"<<endl;
    }
    return 0;
}
